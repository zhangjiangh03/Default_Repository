"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-09
Update Date: 2023-07-09
Update Log:
    - Update the code
"""

class Student:
    name = None
    gender = None
    nationlity = None
    native_place = None
    age = None

    def hello(self):
        print(f"hello{self.name}")


student_1 = Student()
student_1.name = "lin"
student_1.age = 50

print(student_1.name)
print(student_1.age)
student_1.hello()