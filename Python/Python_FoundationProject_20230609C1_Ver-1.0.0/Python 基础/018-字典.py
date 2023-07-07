"""
Version: 1.0
Author: 张江寒Zhang
Date：2023-07-07
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