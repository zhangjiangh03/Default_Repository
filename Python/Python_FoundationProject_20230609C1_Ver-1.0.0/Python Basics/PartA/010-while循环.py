"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-07
Update Date: 2023-07-08
Update Log:
    - Update the code
"""

"""九九乘法表"""
i = 1
while  i <= 9:
    j = 1
    while j <= i:
        print(f"{i}*{j}={i * j}\t", end="")
        j += 1
    print()
    i += 1
