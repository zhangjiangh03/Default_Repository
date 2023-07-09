"""
Version: 1.0
Author: 张江寒Zhang
Creation Date: 2023-07-08
Update Date: 2023-07-08
Update Log: none
"""

input_year = input('请输入年份: ')
year = int(input_year)
leap_year = year % 4 == 0 and year % 100 != 0 or year % 400 == 0
print(leap_year)