"""
Version: 1.0
Author: 张江寒Zhang
Date：2023-07-07
"""

ou = 30

def count(x, v):
    global ou   # 设置内部定义的变量为全局变量
    ou = 20

    sum = 0
    for y in x:
        sum += 1
    return sum + v

v = 2
name = "int"
print(count(name, v), ou)