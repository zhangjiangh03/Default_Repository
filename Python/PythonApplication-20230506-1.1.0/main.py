import tkinter as tk
import ttkbootstrap as ttk
from ttkbootstrap.constants import *
import requests
from bs4 import BeautifulSoup

root = tk.Tk()
root.title("知乎者")

# 设置默认窗口大小
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()
root.geometry("%dx%d+0+0" % (screen_width - 160, screen_height - 200))
root.resizable(False, False)  # 禁止调整窗口大小

# 创建滚动条组件
scrollbar = tk.Scrollbar(root)
scrollbar.pack(side='right',fill='y')

page_index = tk.Frame(root)
page_index.pack()
tk.Label(page_index, text = "有道说", font = 30, padx = 30, pady = 30).pack(side=tk.TOP ,anchor = tk.CENTER)

img = tk.PhotoImage(file = "wallpaper.png")
label_img = tk.Label(page_index, image = img, padx = 0, pady = 0, bd = 0)
label_img.pack(side = tk.TOP, anchor = tk.CENTER)
label_img.config(height = 200)
#
# 创建一个 Labelframe 控件，放置在页面的左侧
# page_catalogue_A = ttk.Frame(root, bootstyle="info")
# page_catalogue_A.pack(side=tk.LEFT, anchor=tk.NW, padx=20, pady=20)
# tk.Label(page_catalogue_A, text="校园热点", font=30, width=40).pack(pady=20)
# ttk.Button(page_catalogue_A, text='查看', bootstyle=PRIMARY).pack(padx=10, pady=10)
#
# page_catalogue_B = ttk.Frame(root, bootstyle="info")
# page_catalogue_B.pack(side=tk.LEFT, anchor=tk.N, padx=20, pady=20)
# tk.Label(page_catalogue_B, text="社团信息", font=30, width=42).pack(pady=20)
# ttk.Button(page_catalogue_B, text='查看', bootstyle=PRIMARY).pack(padx=10, pady=10)
#
# # 创建一个 Labelframe 控件，放置在页面的右侧
# page_catalogue_C = ttk.Frame(root, bootstyle="info")
# page_catalogue_C.pack(side=tk.LEFT, anchor=tk.NE, padx=20, pady=20)
# tk.Label(page_catalogue_C, text="知乎答者", font=30, width=40).pack(pady=20)
# ttk.Button(page_catalogue_C, text='查看', bootstyle=PRIMARY).pack(padx=10, pady=10)

page_container = ttk.Frame(root)
page_container.pack(side=tk.TOP, fill=tk.BOTH, expand=True, padx=20, pady=20)

# 创建一个 Labelframe 控件，放置在容器的左侧
page_catalogue_A = ttk.Frame(page_container, bootstyle="info")
page_catalogue_A.pack(side=tk.LEFT, anchor=tk.NW, padx=20, pady=20)
tk.Label(page_catalogue_A, text="校园热点", font=30, width=40).pack(pady=(20,10))
ttk.Button(page_catalogue_A, text='查看', bootstyle="primary").pack(padx=10, pady=(0,10))

page_catalogue_B = ttk.Frame(page_container, bootstyle="info")
page_catalogue_B.pack(side=tk.LEFT, anchor=tk.N, padx=20, pady=20)
tk.Label(page_catalogue_B, text="社团信息", font=30, width=42).pack(pady=(20,10))
ttk.Button(page_catalogue_B, text='查看', bootstyle="primary").pack(padx=10, pady=(0,10))

# 创建一个 Labelframe 控件，放置在容器的右侧
page_catalogue_C = ttk.Frame(page_container, bootstyle="info")
page_catalogue_C.pack(side=tk.RIGHT, anchor=tk.NE, padx=20, pady=20)
tk.Label(page_catalogue_C, text="知乎答者", font=30, width=40).pack(pady=(20,10))
ttk.Button(page_catalogue_C, text='查看', bootstyle="primary").pack(padx=10, pady=(0,10))


root.mainloop()