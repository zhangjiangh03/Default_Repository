"""
Version: 1.0
Author: 张江寒Zhang
Date：2023-07-06
"""

name = input("请输入您的姓名：")
print("您好，" + name + "！欢迎使用本程序。")

age = input("请输入您的年龄：")
age = int(age)  # 将输入的字符串转换为整数类型

if age >= 18:
    print("您已经成年，可以享受更多权益。")
else:
    print("您还未成年，需要遵守相关法律法规。")
