"""
Version: 1.0
Author: 张江寒Zhang
Date：2023-07-06
"""

# 示例1
for num in range(5):
    print(num, "\t", end="")  # range(stop)：生成从0到stop-1的整数序列
print()

# 示例2
for num in range(2, 7):
    print(num, "\t", end="")  # range(start, stop)：生成从start到stop-1的整数序列
print()

# 示例3
for num in range(1, 10, 2):
    print(num, "\t", end="")  # range(start, stop, step)：生成从start到stop-1的整数序列，步长为step
print()

# 示例4
my_list = list(range(5))
print(my_list)
