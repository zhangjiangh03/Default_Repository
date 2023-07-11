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


student_1 = Student("john", 45, 858)
print(student_1.name)
print(student_1.age)
print(student_1.grader)