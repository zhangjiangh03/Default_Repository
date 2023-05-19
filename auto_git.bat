@echo off

git add .
git commit -m "update"
git push --force origin main

cls

echo Git Push Completed.
pause