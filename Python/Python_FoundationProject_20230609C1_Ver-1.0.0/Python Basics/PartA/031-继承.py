"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-11
Update Date: 2023-07-11
Update Log:
    - Update the code
"""

"""继承语法
class 类名（父类名）：
    类内容体
"""

class BasePhone:
    IMIE = None
    pro = True

    def type_4G(self):
        print("4G基本功能")

class ProPhone(BasePhone):
    wifi_pro = 4.5

    def type_5G(self):
        print("5G Pro")

    # 复写
    def type_4G(self):
        print("4G升级")

prophone = ProPhone()
print(prophone.type_4G())
print(prophone.wifi_pro)

"""多继承语法
class 类名（父类名A, 父类名B, 父类名C, ...）：
    类内容体
"""

"""调用父类成员
方法一：父类名.成员变量 或 父类名.成员方法（self）
方法二：super().成员变量 或 super().成员方法
"""