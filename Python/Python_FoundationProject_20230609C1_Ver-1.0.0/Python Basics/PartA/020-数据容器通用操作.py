"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-07
Update Date: 2023-07-08
Update Log:
    - Update the code
"""

test_list = [1, 6, 2, 3, 4, 5]
test_tuple = (1, 2, 3, 4, 5)
test_str = "12345"
test_set = {1, 2, 3, 4, 5}
test_dict = {
    "key1": 1,
    "key2": 2,
    "key3": 3,
    "key4": 4,
    "key5": 5
}

print(len(test_set))
print(max(test_set))
print(min(test_set))

"""转列表"""
print(type(list(test_set)), list(test_set))

"""排序"""
print(sorted(test_list, reverse=True))
