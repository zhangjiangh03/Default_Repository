"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-11
Update Date: 2023-07-11
Update Log:
    - Update the code
"""

class Student:

    def __init__(self, name, age, grader):
        self.name = name
        self.age = age
        self.grader = grader

        print("测试成功")

    """字符串方法 __str__"""
    def __str__(self):
        return f"{self.name}, {self.age}, {self.grader}"

    """
    __lt__方法 比较(小于大于)
    def __lt__(self, other):
        return self.age < other.age
    
    __le__方法 比较(小于等于 大于等于)
    
    __eq__方法 比较(相等)
    """


student_1 = Student("john", 45, 858)
print(student_1.name)
print(student_1.age)
print(student_1.grader)
print(student_1)