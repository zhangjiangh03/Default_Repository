"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-07
Update Date: 2023-07-08
Update Log:
    - Update the code
"""

"""定义字典字面量"""
{
    "john": 60,
    "hello": 70,
    "hene": 80
}

"""定义字典变量"""
my_dict_1 = {
    "john": {
        "age": 18,
        "grade": 50
    },
    "hello": {
        "age": 15,
        "grade": 63
    },
    "hene": {
        "age": 8,
        "grade": 85
    }
}
"""定义空字典"""
my_dict_2 = {}
my_dict_3 = dict()

print(my_dict_1)
print(my_dict_1["john"])
print(my_dict_1["john"]["age"])

my_dict_1.pop("hene")
print(my_dict_1)

my_dict_1.clear()
print(my_dict_1)

my_dict_1 = {
    "john": {
        "age": 18,
        "grade": 50
    },
    "hello": {
        "age": 15,
        "grade": 63
    },
    "hene": {
        "age": 8,
        "grade": 85
    }
}
keys = my_dict_1.keys()
print(f"测试{keys}")

for key in my_dict_1:
    print(f"测试{key}")
    print(f"测试{my_dict_1[key]}")


"""案例"""
information = {
    "王立": {
        "部门": "科研部",
        "工资": 3000,
        "级别": 2
    },
    "王里": {
        "部门": "市场部",
        "工资": 3000,
        "级别": 1
    },
    "李白": {
        "部门": "科研部",
        "工资": 3000,
        "级别": 2
    }
}

print(information)

for name in information:
    if information[name]["级别"] == 1:
        employee = information[name]
        employee["级别"] = 2
        employee["工资"] += 2000
        information[name] = employee

print(information)