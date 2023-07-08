"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-07
Update Date: 2023-07-08
Update Log:
    - Update the code
"""

ou = 30


def count(x, v):
    global ou  # 设置内部定义的变量为全局变量
    ou = 20

    sum = 0
    for y in x:
        sum += 1
    return sum + v


v = 2
name = "int"
print(count(name, v), ou)

"""函数的多返回值"""


def test_return():
    return 1, 3, 5


x, y, z, = test_return()
print(x, y, z)

"""函数的参数传入"""


# 位置传参 -> 传参一一对应函数参数位置

# 关键字传参
def info(names, age, grade):
    print(names, age, grade)


info(names="john", age=12, grade=2)


# 缺省参数 -> 设置默认参数（位于函数参数的后面，否则报错）
def test_def(name_info, age_info=12):
    return


# 不定长参数 - 位置传递
def infoma(*args):
    print(*args)


infoma(1, 2, 3, 4)


# 不定长参数 - 关键字传递
def infomas(**kwargs):
    print(type(kwargs))
    for x in kwargs:
        print(x, ":", kwargs[x])


infomas(key=1, test=50)

"""匿名函数"""
def test_function(test_function_1):
    return test_function_1(3, 4) + 2


def test_function_1(x, y):
    return x + y


print(test_function(test_function_1))  # 输出：9

"""lambda匿名函数"""
# lambda 传入参数: 函数体（一行代码）
result = (lambda xa, ya: xa * ya)(3, 2)
print(result)  # 输出：9

print(test_function(lambda xa, ya: xa * ya))

