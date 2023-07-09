"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-09
Update Date: 2023-07-09
Update Log:
    - Update the code
"""

"""
模块基本语法
[from 模块名] import [模块、类、变量、函数 *] [as 别名]
"""
# import time
#
# print(123)
# time.sleep(5)
# print(456)

"""from import 只用模块中的某个部分"""
# from time import sleep
#
# print(123)
# sleep(2)
# print(456)

"""from import * 全部导入模块的内容"""
# from time import *
# print(123)
# sleep(2)
# print(456)

"""as 别名"""
# import time as ts
# print(123)
# ts.sleep(2)
# print(456)

"""自定义模块"""
# import 附件.test_module as te
#
# print(te.add(5, 6))

"""__main__"""
#
# import 附件.test_module as te
#
# if __name__ == '__main__':
#     print(te.add(5, 6))

"""__all__ = [""] 变量"""

