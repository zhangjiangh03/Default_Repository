# import jieba
# from wordcloud import WordCloud
# import matplotlib.pyplot as plt
#
# with open('1.txt', 'r', encoding='utf-8') as f:
#     text = f.read()
# words = jieba.cut(text)
#
# word_dict = {}
# for word in words:
#     if len(word) > 1:
#         word_dict[word] = word_dict.get(word, 0) + 1
# wc = WordCloud(font_path="simhei.ttf", max_words=100, background_color='white')
# wc.generate_from_frequencies(word_dict)
#
# plt.imshow(wc, interpolation='bilinear')
# plt.axis('off')
# plt.show()

import requests
from bs4 import BeautifulSoup
import tkinter as tk

# 获取HTML文本内容
url = 'https://gitee.com/zhangjiangh03/temp/raw/master/1.txt'
response = requests.get(url)
html_content = response.text

# 解析HTML文本内容找到pre标签的内容
soup = BeautifulSoup(html_content, 'html.parser')
pre_content = soup.find('pre')

if pre_content is not None:
    pre_content = pre_content.get_text()
else:
    pre_content = "未找到pre标签"

# 创建GUI界面并输出文本内容
root = tk.Tk()
label = tk.Label(root, text=pre_content)
label.pack()
root.mainloop()
#
# import tkinter as tk
# import ttkbootstrap as ttk
# from ttkbootstrap.constants import *
# from bs4 import BeautifulSoup
#
# root = tk.Tk()
# root.title("知乎者")
#
# # 设置默认窗口大小
# screen_width, screen_height = root.winfo_screenwidth(), root.winfo_screenheight()
# root.geometry(f"{screen_width - 160}x{screen_height - 200}")
# root.resizable(False, False)
#
# # 创建滚动条组件
# scrollbar = tk.Scrollbar(root)
# scrollbar.pack(side='right', fill='y')
#
# page_index = tk.Frame(root)
# page_index.pack()
#
# tk.Label(page_index, text="有道说", font=("微软雅黑", 30), padx=30, pady=30,
#          side=tk.TOP, anchor=tk.CENTER).pack()
#
# img = tk.PhotoImage(file="wallpaper.png")
# label_img = tk.Label(page_index, image=img, padx=0, pady=0, bd=0,
#                      side=tk.TOP, anchor=tk.CENTER)
# label_img.pack()
# label_img.config(height=200)
#
# # 创建一个 Labelframe 控件，放置在页面的左侧
# page_catalogue_A = ttk.Frame(root, bootstyle="info")
# page_catalogue_A.pack(side='left', anchor='nw', padx=20, pady=20)
# tk.Label(page_catalogue_A, text="校园热点", font=("微软雅黑", 30), width=40,
#          side=tk.TOP, anchor=tk.CENTER, pady=20).pack()
# ttk.Button(page_catalogue_A, text='查看', bootstyle=PRIMARY,
#             padx=10, pady=10).pack()
#
# page_catalogue_B = ttk.Frame(root, bootstyle="info")
# page_catalogue_B.pack(side='left', anchor='n', padx=20, pady=20)
# tk.Label(page_catalogue_B, text="社团信息", font=("微软雅黑", 30), width=42,
#          side=tk.TOP, anchor=tk.CENTER, pady=20).pack()
# ttk.Button(page_catalogue_B, text='查看', bootstyle=PRIMARY,
#             padx=10, pady=10).pack()
#
# # 创建一个 Labelframe 控件，放置在页面的右侧
# page_catalogue_C = ttk.Frame(root, bootstyle="info")
# page_catalogue_C.pack(side='left', anchor='ne', padx=20, pady=20)
# tk.Label(page_catalogue_C, text="知乎答者", font=("微软雅黑", 30), width=40,
#          side=tk.TOP, anchor=tk.CENTER, pady=20).pack()
# ttk.Button(page_catalogue_C, text='查看', bootstyle=PRIMARY,
#             padx=10, pady=10).pack()
#
# root.mainloop()
