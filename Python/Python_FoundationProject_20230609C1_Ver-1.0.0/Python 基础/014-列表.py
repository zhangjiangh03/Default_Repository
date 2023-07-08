"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-07
Update Date: 2023-07-08
Update Log:
    - Update the code
"""

"""列表字面量"""
["name", "age", 20, 50]

"""定义列表变量"""
a = ["name", "age", 20, 50]

"""定义空列表"""
b = []
c = list()

"""列表的嵌套"""
[[1, 2, 3], [4, 5, 6]]

list_a = [1, 2, 3, 4, 5, 6]
print(list_a[-1])

list_b = [[1, 2, 3], [4, 5, 6]]
print(list_b[0][1])

"""列表操作"""
# 查询下标
a_index = list_a.index(2)
print(a_index)

# 插入新元素
list_a.insert(1, "test")
print(list_a)

# 元素追加
list_a.append("okokokokok") # 追加一个
list_a.extend(list_b)   # 追加批量
print(list_a)

# 删除元素
ab = [1, 2, 3, 4, 5, 6, 7]
del ab[2]
print(ab)
ac = ab.pop(0)
print(ab, f"元素为{ac}")

# remove方法

# 清空列表
ab.clear()
print(ab)

# 统计元素个数
ab = [1, 2, 3, 4, 5, 6, 7, 2, 2]
print(ab.count(2))

# 统计列表元素个数
print(len(ab))