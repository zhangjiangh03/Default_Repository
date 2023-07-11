"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-07
Update Date: 2023-07-08
Update Log:
    - Update the code
"""

"""切片从索引 2 到索引 5（不包含）"""
sequence = "Hello, world!"
sliced_sequence = sequence[2:5]
print(sliced_sequence)  # 输出：llo

"""省略起始索引，从开头切片到索引 3（不包含）"""
sequence = [1, 2, 3, 4, 5]
sliced_sequence = sequence[:3]
print(sliced_sequence)  # 输出：[1, 2, 3]

"""省略结束索引，从索引 2 切片到末尾"""
sequence = (1, 2, 3, 4, 5)
sliced_sequence = sequence[2:]
print(sliced_sequence)  # 输出：(3, 4, 5)

"""使用负数索引，切片倒数第 3 个到倒数第 1 个（不包含）"""
sequence = "Hello, world!"
sliced_sequence = sequence[-3:-1]
print(sliced_sequence)  # 输出：rld
