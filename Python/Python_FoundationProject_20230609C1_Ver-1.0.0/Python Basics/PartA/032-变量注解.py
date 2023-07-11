"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-11
Update Date: 2023-07-11
Update Log:
    - Update the code
"""
import json
import random

"""变量注解 变量名：类型 = 数据内容"""
var_test: int = 10

"""类对象注解"""
class Student:
    pass
stu: Student = Student()

"""容器类型注解"""
list_test: list = [1, 2, 3]
dict_test: dict[str, int] = {"test": 666}

"""在注释中注解"""
var_a = random.randint(1, 8) # type: int
var_b = json.load('{"name": "john"}') # type: dict[str, str]

"""函数注解
语法：
def 函数方法名（形参名：类型，形参名：类型...）
def test(x: int, y: int):
    return x + y

返回值的注解
语法：def 函数方法名（形参名：类型，形参名：类型...） -> 返回值类型：
def func(data: list) -> list:
    return data
"""

"""Union 
# 导包
from typing import Union

my_list: list[Union[str, int]] = [1, 2, "test", "bug"] # 存放内容要么是int类型或str类型，函数/方法同样可以使用
"""
