"""
Version: 1.0
Author: 张江寒Zhang
Date：2023-07-07
"""

"""定义集合字面量"""
{1, 2, 3, 4, 5}

"""定义集合变量"""
a = {1, 2, 3, 4, 5}

"""定义空集合"""
b = set()

""""""

my_set_1 = {1, 2, 3, 4, 9, 50, 6}
my_set_2 = {1, 2, 3, 4, 5, 6, 7}
print(my_set_1)
my_set_1.add(5)
print(my_set_1)
my_set_1.remove(4)
print(my_set_1)
my_set_3 = my_set_1.difference(my_set_2)
print(my_set_3)

my_set_1.difference_update(my_set_2)
print(my_set_1)

my_set_4 = my_set_2.union(my_set_3)
print(my_set_4)