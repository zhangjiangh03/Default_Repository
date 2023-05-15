import requests
import tkinter as tk
import ttkbootstrap as ttk
from bs4 import BeautifulSoup

# 创建一个根窗口对象和设置窗口标题
root = tk.Tk()
root.title("大通讯")

# 设置默认窗口
screen_width, screen_height = root.winfo_screenwidth(), root.winfo_screenheight()
root.geometry(f"{screen_width - 160}x{screen_height - 200}")
root.resizable(False, False)

# 创建滚动条组件
scrollbar = tk.Scrollbar(root)
scrollbar.pack(side = "right",fill="y")

# 文字标题
page_title = ttk.Frame(root)
page_title.pack()
tk.Label(page_title, text = "有道说", font = 30, padx = 30, pady = 30).pack()

# 轮播图
page_img = ttk.Frame(root)
page_img.pack()

# 轮播图路径
img_list = ["wallpaper.png", "result.png"]

# 初始化
img = tk.PhotoImage(file = img_list[0])
label_img = tk.Label(page_img, image = img, padx = 0, pady = 0, bd=0)
label_img.pack(side = tk.TOP, anchor = tk.CENTER)
label_img.config(height = 200)

img_temp = 0
def slideshow():
    global img_temp, img
    # 更新图片索引
    img_temp = (img_temp + 1) % len(img_list)
    # 更新图片
    img = tk.PhotoImage(file = img_list[img_temp])
    label_img.config(image = img)
    # 每 3 秒调用一次
    root.after(3000, slideshow)

root.after(3000, slideshow)

# 分类
page_category = ttk.Frame(root)
page_category.pack()

page_category_left = ttk.Labelframe(page_category, bootstyle = "info")
page_category_left.pack(side = tk.LEFT, anchor = tk.NW, padx = 20, pady = 20)
tk.Label(page_category_left, text = "校园热点\n", font = 30, width = 40).pack(pady = (20,10))
ttk.Button(page_category_left, text = "查看", bootstyle = "primary").pack(padx = 10, pady = (0,10))

page_category_center = ttk.Labelframe(page_category, bootstyle = "info")
page_category_center.pack(side = tk.LEFT, anchor = tk.N, padx = 20, pady = 20)
tk.Label(page_category_center, text = "校园热点\n", font = 30, width = 40).pack(pady = (20,10))
ttk.Button(page_category_center, text = "查看", bootstyle="primary").pack(padx = 10, pady = (0,10))

page_category_right = ttk.Labelframe(page_category, bootstyle = "info")
page_category_right.pack(side = tk.LEFT, anchor = tk.N, padx = 20, pady = 20)
tk.Label(page_category_right, text = "校园热点\n", font = 30, width = 40).pack(pady = (20,10))
ttk.Button(page_category_right, text = "查看", bootstyle="primary").pack(padx = 10, pady = (0,10))

# 文字
page_text = ttk.Frame(root)
page_text.pack()

# 获取HTML文本内容
url = "https://gitee.com/zhangjiangh03/temp/raw/master/1.txt"
response = requests.get(url)
html_content = response.text

# 解析HTML文本内容找到pre标签的内容
soup = BeautifulSoup(html_content, "html.parser")
pre_content = soup.find("pre")

if pre_content is not None:
    pre_content = pre_content.get_text()
else:
    pre_content = "数据错误，未找到pre标签"

tk.Label(page_text, text = pre_content, font = 30, padx = 30, pady = 30).pack()

root.mainloop()