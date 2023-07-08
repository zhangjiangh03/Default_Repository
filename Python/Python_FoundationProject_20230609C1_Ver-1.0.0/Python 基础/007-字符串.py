"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-07
Update Date: 2023-07-08
Update Log:
    - Update the code
"""

name = "你好，这是一条测试"
age = 80
# 字符串拼接
print(name + " " + "world")

# 字符串格式化方式（一）
massage = "测试 %s" % name
# 多个匹配时使用括号 eg：massage = "测试 %s %d" % (name, eag)

print(massage + " " + "world")

# 字符串格式化方式（二）
# 快速格式化 f"内容"{变量}
print(f"Heloo{age}")

# 字符串格式化精度控制
print("Heloo %6.2f" % age)

# 对表达式进行格式化
print("5 * 2 的结果是 %6.2f" % (5 * 2))
print(f"5 * 2 的结果是 {5 * 2}")