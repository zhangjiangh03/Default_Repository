import matplotlib as mpl
mpl.rcParams['font.sans-serif'] = ['SimHei']  # 设置中文字符集
mpl.rcParams['axes.unicode_minus'] = False   # 解决负号无法正常显示的问题

import imageio
from scipy import ndimage


import matplotlib.pyplot as plt

image = imageio.imread("1.png")

f_image = ndimage.median_filter(image, size=2)

plt.subplot(121) # 第一子图
plt.imshow(image)
plt.title("原始图片")
plt.axis("off")

plt.subplot(122) # 第二子图
plt.imshow(f_image)
plt.title("滤波图片")
plt.axis("off")

plt.show()