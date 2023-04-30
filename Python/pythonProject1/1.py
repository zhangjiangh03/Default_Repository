import matplotlib.pyplot as plt
import matplotlib as mpl
mpl.rcParams['font.sans-serif'] = ['SimHei']  # 设置中文字符集
mpl.rcParams['axes.unicode_minus'] = False   # 解决负号无法正常显示的问题

import numpy as np

# 读取数据文件
import pandas as pd
data = pd.read_csv("1978_2020_GDP.csv", encoding="gb2312")
df = pd.DataFrame(data)

# 提取数据
years = np.array(df['年份'])
gdp = np.array(df['GDP(亿元)'])
gdprate = np.array(df['GDP增长率（%）'])
gdpaverage = np.array(df['人均GDP(元/人)'])

P = np.polyfit(years, gdp, 2)
plt.scatter(years, gdp, label="实际数据")
plt.plot(years, np.polyval(P, years), 'r', label='拟合曲线')
plt.xlabel('年份')
plt.ylabel('GDP(亿元)')
plt.title('数据拟合')
plt.legend()

plt.show()


