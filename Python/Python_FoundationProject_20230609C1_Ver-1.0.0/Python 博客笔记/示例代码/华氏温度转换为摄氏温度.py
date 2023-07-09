"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-08
Update Date: 2023-07-08
Update Log: none
"""

temperature = input('请输入华氏温度: ')
fahrenheit = float(temperature)
centigrade = (fahrenheit - 32) / 1.8
print("%.1f华氏度 = %.1f摄氏度" % (fahrenheit, centigrade))