"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-11
Update Date: 2023-07-11
Update Log:
    - Update the code
"""

"""私有成员变量、私有成员方法 其实就是类内可以使用的变量和方法"""
class Phone:

    # 私有成员变量
    __current_voltage = None

    # 私有成员方法
    def __keep_single_core(self):
        print("测试成功")

    def testprint(self):
        self.__keep_single_core()

phone = Phone()
# 错误
# print(phone.__current_voltage)
phone.testprint()