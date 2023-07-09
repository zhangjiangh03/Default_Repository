"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-09
Update Date: 2023-07-09
Update Log:
    - Update the code
"""

"""常用异常"""
try:
    open("附件/acb.txt", "r", encoding="UTF-8")
except:
    print("error ")
    open("附件/acb.txt", "w", encoding="UTF-8")

"""捕获指定异常"""
try:
    print(name)
except NameError as e:
    print("出现异常")
    print(e)

"""捕获多个异常"""
try:
    print(age)
    1 / 0
except (NameError, ZeroDivisionError) as e:
    print("出现除零异常和未命名异常")

"""捕获所有异常"""
try:
    1 / 0
except Exception as e:
    print("出现异常")

"""异常else"""
try:
    1 / 0
except Exception as e:
    print(123)
else:
    print(456)

"""异常finally"""
try:
    1 / 0
except Exception as e:
    print(789789)
else:
    print(456789)
finally:
    print(123789)

"""异常传递性"""