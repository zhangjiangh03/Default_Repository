import imageio
import matplotlib.pyplot as plt
# 读取图像文件
image = imageio.imread("1.png")
# 显示图像
plt.imshow(image)
plt.axis("off")
plt.show()