import re
import subprocess
from datetime import datetime
from pathlib import Path

ROOT = Path(__file__).parent
README = ROOT / "README.md"
IGNORE = {".git", ".vscode", ".github", "__pycache__"}

# Optional: total problems per folder, using your exact folder names, e.g.
# TOTALS = {"03-Arrays": 40, "04-Binary-Search": 32}
TOTALS = {}


def bar(done, total, width=10):
    filled = min(width, round(width * done / total)) if total else 0
    return "█" * filled + "░" * (width - filled)


def build_table():
    folders = sorted(
        p for p in ROOT.iterdir()
        if p.is_dir() and p.name not in IGNORE and not p.name.startswith(".")
    )
    lines = ["| Topic | Solved | Total | Progress |", "|---|---|---|---|"]
    solved_all = 0
    for f in folders:
        solved = len(list(f.rglob("*.cpp")))
        solved_all += solved
        total = TOTALS.get(f.name)
        if total:
            lines.append(f"| {f.name} | {solved} | {total} | {bar(solved, total)} {solved * 100 // total}% |")
        else:
            lines.append(f"| {f.name} | {solved} | - | - |")
    lines.append(f"| **All** | **{solved_all}** | | |")
    stamp = datetime.now().strftime("%d %b %Y")
    return "\n".join(lines) + f"\n\n*Last updated: {stamp}*"


def update_readme():
    table = build_table()
    text = README.read_text(encoding="utf-8")
    new = re.sub(
        r"<!-- PROGRESS_START -->.*?<!-- PROGRESS_END -->",
        f"<!-- PROGRESS_START -->\n{table}\n<!-- PROGRESS_END -->",
        text,
        flags=re.DOTALL,
    )
    README.write_text(new, encoding="utf-8")


def git(*args):
    return subprocess.run(["git", *args], cwd=ROOT, capture_output=True, text=True)


def main():
    update_readme()
    git("add", "-A")

    if not git("status", "--porcelain").stdout.strip():
        print("Nothing to commit.")
        return

    added = git("diff", "--cached", "--name-only", "--diff-filter=A").stdout.split()
    cpp = [Path(p).stem for p in added if p.endswith(".cpp")]
    if cpp:
        msg = "Add: " + ", ".join(cpp[:3]) + (f" +{len(cpp) - 3} more" if len(cpp) > 3 else "")
    else:
        msg = "Update repo"

    git("commit", "-m", msg)
    result = git("push")
    print(f"Committed: {msg}")
    print(result.stdout or result.stderr)


if __name__ == "__main__":
    main()