import matplotlib as mpl
mpl.rcParams['font.sans-serif'] = ['SimHei']  # 设置中文字符集
mpl.rcParams['axes.unicode_minus'] = False   # 解决负号无法正常显示的问题


import imageio
from PIL import Image
import matplotlib.pyplot as plt

image = imageio.imread("1.png")

# 将ndarray数组转换为PIL Image对象
pil_image = Image.fromarray(image)
# 对图像进行旋转
rotated_image = pil_image.rotate(45)
# 将PIL Image对象转换为ndarray数组
rotated_array = imageio.core.util.asarray(rotated_image)

# 显示原始图像和旋转后的图像
plt.subplot(121)
plt.imshow(image)
plt.title("原始图片")
plt.axis("off")

plt.subplot(122)
plt.imshow(rotated_array)
plt.title("旋转图片")
plt.axis("off")
plt.show()