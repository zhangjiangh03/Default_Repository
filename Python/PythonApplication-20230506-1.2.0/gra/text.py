# import requests
# import tkinter as tk
# import ttkbootstrap as ttk
# from bs4 import BeautifulSoup
#
# # 创建一个根窗口对象和设置窗口标题
# root = tk.Tk()
# root.title("大通讯")
#
# # 设置默认窗口
# screen_width, screen_height = root.winfo_screenwidth(), root.winfo_screenheight()
# root.geometry(f"{screen_width - 160}x{screen_height - 200}")
# root.minsize(screen_width - 470, screen_height - 300)
# # root.resizable(False, False)
#
# # 创建滚动条组件
# scrollbar = tk.Scrollbar(root)
# scrollbar.pack(side = "right",fill="y")
#
# # 文字标题
# page_title = ttk.Frame(root)
# page_title.pack()
# tk.Label(page_title, text = "有道说", font = 30, padx = 30, pady = 30).pack()
#
# # 轮播图
# page_img = ttk.Frame(root)
# page_img.pack()
#
# # 轮播图路径
# img_list = ["images/wallpaper.png", "images/WechatPay.png"]
#
# # 初始化
# img = tk.PhotoImage(file = img_list[0])
# label_img = tk.Label(page_img, image = img, padx = 0, pady = 0, bd=0)
# label_img.pack(side = tk.TOP, anchor = tk.CENTER)
# label_img.config(height = 200)
#
# img_temp = 0
# def slideshow():
#     global img_temp, img
#     # 更新图片索引
#     img_temp = (img_temp + 1) % len(img_list)
#     # 更新图片
#     img = tk.PhotoImage(file = img_list[img_temp])
#     label_img.config(image = img)
#     # 每 3 秒调用一次
#     root.after(3000, slideshow)
#
# root.after(3000, slideshow)
#
# # 分类
# page_category = ttk.Frame(root)
# page_category.pack()
#
# width_temp = 30
#
# # 左
# page_category_left = ttk.Labelframe(page_category, text = "My Labelframe", bootstyle = "info")
# page_category_left.pack(side = tk.LEFT, anchor = tk.NW, padx = 20, pady = 20)
#
# tk.Label(page_category_left, text = "热点\n", font = 30, width = width_temp).pack(pady = (20,10))
# ttk.Button(page_category_left, text = "查看", bootstyle = "primary").pack(padx = 10, pady = (0,10))
#
# # 中
# page_category_center = ttk.Labelframe(page_category, text = "My Labelframe", bootstyle = "info")
# page_category_center.pack(side = tk.LEFT, anchor = tk.N, padx = 20, pady = 20)
#
# tk.Label(page_category_center, text = "热点\n", font = 30, width = width_temp).pack(pady = (20,10))
# ttk.Button(page_category_center, text = "查看", bootstyle="primary").pack(padx = 10, pady = (0,10))
#
# # 右
# page_category_right = ttk.Labelframe(page_category, text = "My Labelframe", bootstyle = "info")
# page_category_right.pack(side = tk.LEFT, anchor = tk.NE, padx = 20, pady = 20)
#
# tk.Label(page_category_right, text = "热点\n", font = 30, width = width_temp).pack(pady = (20,10))
# ttk.Button(page_category_right, text = "查看", bootstyle="primary").pack(padx = 10, pady = (0,10))
#
# # 水平分割线
# separator = ttk.Separator(root, bootstyle="info")
# separator.pack()
#
# # 文章列表
#
#
#
# root.mainloop()



import os
import tkinter as tk
from tkinter import ttk
import math
import time





#
# import os
# import tkinter as tk
# from tkinter import ttk, messagebox
# from tkinter import filedialog
# import math
# import time
# import subprocess
#
#
# class DirectoryViewer(tk.Frame):
#
#     def __init__(self, master=None):
#         super().__init__(master)
#         self.master = master
#         self.create_widgets()
#         self.treeview = ttk.Treeview(self)
#
#     def create_widgets(self):
#         self.treeview = ttk.Treeview(self.master, columns=('size', 'modified'))
#         self.treeview.heading('#0', text='Name')
#         self.treeview.heading('size', text='Size')
#         self.treeview.heading('modified', text='Modified')
#         vsb = ttk.Scrollbar(self.master, orient='vertical', command=self.treeview.yview)
#         hsb = ttk.Scrollbar(self.master, orient='horizontal', command=self.treeview.xview)
#         self.treeview.configure(yscrollcommand=vsb.set, xscrollcommand=hsb.set)
#         self.treeview.grid(column=0, row=0, sticky='nsew')
#         vsb.grid(column=1, row=0, sticky='ns')
#         hsb.grid(column=0, row=1, sticky='ew')
#         self.master.grid_columnconfigure(0, weight=1)
#         self.master.grid_rowconfigure(0, weight=1)
#         self.treeview.bind('<Double-1>', self.on_double_click)
#
#     def populate_treeview(self, path):
#         self.treeview.delete(*self.treeview.get_children())
#         for item in os.scandir(path):
#             if item.is_dir():
#                 name = item.name
#                 size = ''
#                 modified = ''
#             else:  # it is a file
#                 name = item.name
#                 size = self.get_size(item.stat().st_size)
#                 modified = self.get_modified_time(item.stat().st_mtime)
#             self.treeview.insert('', 'end', text=name, values=(size, modified))
#
#     def on_double_click(self, event):
#         item = self.treeview.selection()[0]
#         if os.path.isfile(os.path.join(os.getcwd(), self.treeview.item(item)['text'])) and os.path.splitext(self.treeview.item(item)['text'])[1] == '.txt':
#             file_path = os.path.join(os.getcwd(), self.treeview.item(item)['text'])
#             try:
#                 with open(file_path, 'r') as f:
#                     content = f.read()
#             except FileNotFoundError:
#                 messagebox.showwarning('Error', 'Could not find file.')
#                 return
#             except PermissionError:
#                 messagebox.showwarning('Error', 'Permission denied.')
#                 return
#             top = tk.Toplevel(self.master)
#             top.title(file_path)
#             text_frame = tk.Frame(top)
#             text_frame.pack(fill='both', expand=True)
#             text_editor = tk.Text(text_frame, wrap='none')
#             text_editor.insert('end', content)
#             text_editor.pack(fill='both', expand=True, side='left')
#             vsb = ttk.Scrollbar(text_frame, orient='vertical', command=text_editor.yview)
#             hsb = ttk.Scrollbar(text_frame, orient='horizontal', command=text_editor.xview)
#             vsb.pack(fill='y', side='right')
#             hsb.pack(fill='x', side='bottom')
#             text_editor.configure(yscrollcommand=vsb.set, xscrollcommand=hsb.set)
#             top.protocol('WM_DELETE_WINDOW', text_editor.quit)
#             text_editor.bind('<Control-s>', lambda e: self.save_file(file_path, text_editor.get('1.0', 'end')))
#             text_editor.focus_set()
#         elif os.path.isfile(os.path.join(os.getcwd(), self.treeview.item(item)['text'])):
#             file_path = os.path.join(os.getcwd(), self.treeview.item(item)['text'])
#             self.open_with_external_editor(file_path)
#
#     def get_size(self, size_bytes):
#         if size_bytes == 0:
#             return "0B"
#         size_name = ("B", "KB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB")
#         i = int(math.floor(math.log(size_bytes, 1024)))
#         p = math.pow(1024, i)
#         s = round(size_bytes / p, 2)
#         return "%s %s" % (s, size_name[i])
#
#     def get_modified_time(self, timestamp):
#         return time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(timestamp))
#
#     def save_file(self, file_path, content):
#         with open(file_path, 'w') as f:
#             f.write(content)
#
#     def open_with_external_editor(self, file_path):
#         try:
#             subprocess.run(['open', '-a', 'TextEdit', file_path], check=True)   # replace TextEdit with your preferred text editor
#         except subprocess.CalledProcessError:
#             messagebox.showwarning('Error', 'Failed to open external editor.')
#
#
# if __name__ == '__main__':
#     root = tk.Tk()
#     root.title('Directory Viewer')
#     root.geometry('600x400')
#     dv = DirectoryViewer(root)
#     dv.populate_treeview(os.path.join(os.getcwd(), 'maet'))
#     root.mainloop()
#

#
# import os
# import math
# import time
# import tkinter as tk
# from tkinter import ttk
#
#
# class DirectoryViewer(tk.Frame):
#     def __init__(self, master=None):
#         super().__init__(master)
#         self.master = master
#         self.create_widgets()
#
#
#     def create_widgets(self):
#         # 创建Treeview，包含两个列
#         self.treeview = ttk.Treeview(self.master, columns=('modified',))
#         # 设置列名及其对应的文本
#         self.treeview.heading('#0', text='文章标题')
#         self.treeview.heading('modified', text='日期')
#         # 创建垂直和水平滚动条
#         vsb = ttk.Scrollbar(self.master, orient='vertical', command=self.treeview.yview)
#         hsb = ttk.Scrollbar(self.master, orient='horizontal', command=self.treeview.xview)
#         # 关联滚动条与Treeview
#         self.treeview.configure(yscrollcommand=vsb.set, xscrollcommand=hsb.set)
#         # 放置Treeview和滚动条
#         self.treeview.grid(column=0, row=0, sticky='nsew')
#         vsb.grid(column=1, row=0, sticky='ns')
#         hsb.grid(column=0, row=1, sticky='ew')
#         # 设置可伸缩
#         self.master.grid_columnconfigure(0, weight=1)
#         self.master.grid_rowconfigure(0, weight=1)
#
#     def populate_treeview(self, path):
#         # 删除所有子节点
#         self.treeview.delete(*self.treeview.get_children())
#         for item in os.scandir(path):
#             if item.is_dir():
#                 name = item.name
#                 modified = ''
#             else:
#                 name = item.name
#                 modified = self.get_modified_time(item.stat().st_mtime)
#             # 插入节点
#             self.treeview.insert('', 'end', text=name, values=(modified,))
#
#     def get_modified_time(self, timestamp):
#         # 格式化时间戳
#         return time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(timestamp))
#
#
# if __name__ == '__main__':
#     root = tk.Tk()
#     root.title('Directory Viewer')
#     root.geometry('600x400')
#     # 创建目录视图控件并显示根目录下的文件
#     dv = DirectoryViewer(root)
#     dv.populate_treeview(os.path.join(os.getcwd(), 'maet'))
#     root.mainloop()

#
# from flask import Flask, request
# import requests
# from bs4 import BeautifulSoup
#
# app = Flask(__name__)
#
#
# @app.route('/', methods=['GET'])
# def index():
#     url = request.args.get('url')
#
#     if url:
#         response = requests.get(url)
#         soup = BeautifulSoup(response.content, 'lxml')
#
#         # 替换所有CSS和JS文件的链接为完整链接
#         for link in soup.find_all('link'):
#             if link.get('href') and not link.get('href').startswith('http'):
#                 link['href'] = f"{url}/{link.get('href')}"
#         for script in soup.find_all('script'):
#             if script.get('src') and not script.get('src').startswith('http'):
#                 script['src'] = f"{url}/{script.get('src')}"
#
#         return str(soup)
#
#     return '''
#         <form method="get">
#             <input type="text" name="url" placeholder="请输入要访问的网址">
#             <button type="submit">访问</button>
#         </form>
#     '''
#
#
# if __name__ == '__main__':
#     app.run()


# import sys
# from PyQt5.QtCore import QUrl
# from PyQt5.QtWebEngineWidgets import QWebEngineView
# from PyQt5.QtWidgets import QApplication, QLabel, QWidget
# from PyQt5.QtGui import QFont
#
# class LinkLabel(QLabel):
#     def __init__(self, parent=None):
#         super().__init__(parent)
#         self.setText("<a href=' '>https://www.google.com</a >")
#         self.setFont(QFont("Arial", 14))
#         self.linkActivated.connect(self.link_clicked)
#         self.browser = None
#
#     def link_clicked(self, url):
#         if self.browser is None:
#             self.browser = WebBrowser()
#         self.browser.web_view.setUrl(QUrl(url))
#         self.browser.show()
#
# class WebBrowser(QWidget):
#     def __init__(self):
#         super().__init__()
#         self.setGeometry(50, 50, 800, 600)
#         self.setWindowTitle('Web Browser')
#         self.web_view = QWebEngineView(self)
#         self.web_view.setGeometry(0, 0, 800, 600)
#
# if __name__ == '__main__':
#     app = QApplication(sys.argv)
#     label = LinkLabel()
#     label.show()
#     sys.exit(app.exec_())

#
# import requests
# import tkinter as tk
# import ttkbootstrap as ttk
#
# from bs4 import BeautifulSoup
#
# # 创建一个根窗口对象和设置窗口标题
# root = tk.Tk()
# root.title("大通讯")
#
# # 文字
# page_text = ttk.Frame(root)
# page_text.pack()
#
# # 获取HTML文本内容
# url = "https://gitee.com/zhangjiangh03/temp/raw/master/1.txt"
# response = requests.get(url)
# html_content = response.text
#
# # 解析HTML文本内容找到pre标签的内容
# soup = BeautifulSoup(html_content, "html.parser")
# text_content = soup.find("pre")
#
# if text_content is not None:
#     text_content = text_content.get_text()
# else:
#     text_content = "数据错误，未找到pre标签"
#
# tk.Label(page_text, text = text_content, font = 15, padx = 30, pady = 30).pack()
#
# root.mainloop()

#
#
# import requests
# from wordcloud import WordCloud
# import io
# from PIL import ImageTk, Image
# import tkinter as tk
#
# root = tk.Tk()
# root.title("词云图展示")
#
# # 创建Frame作为整个窗口的容器
# page_text = tk.Frame(root)
# page_text.pack()
#
# url = "https://gitee.com/zhangjiangh03/temp/raw/master/1.txt"
# response = requests.get(url)
# html_content = response.text
#
# # 将文本内容写入本地文件中
# with open("Wordcloud.txt", "w", encoding="utf-8") as f:
#     f.write(html_content)
#
# # 读取文本文件内容
# with open("Wordcloud", "r", encoding="utf-8") as f:
#     file_content = f.read()
#
# # 生成词云图
# wordcloud = WordCloud(background_color="white").generate(file_content)
#
# # 将PIL Image对象转换为Tkinter PhotoImage对象
# def image_to_PhotoImage(image):
#     imgByteArr = io.BytesIO()
#     image.save(imgByteArr, format='PNG')
#     imgByteArr = imgByteArr.getvalue()
#     photo = ImageTk.PhotoImage(data=imgByteArr)
#     return photo
#
# # 将词云图转换为PIL Image对象
# image = wordcloud.to_image()
#
# # 将PIL Image对象转换为Tkinter PhotoImage对象
# photo = image_to_PhotoImage(image)
#
# # 在Tkinter界面中显示词云图
# label = tk.Label(page_text, image=photo, padx=50, pady=50)
# label.pack()
#
# root.mainloop()




from tkinter import *

class App(Frame):
    def __init__(self, master=None):
        super().__init__(master)
        self.pack(expand=YES, fill=BOTH)
        self.create_widgets()

    def create_widgets(self):
        # 创建顶部标签
        self.label_top = Label(self, text="这是一个响应式图文窗口")
        self.label_top.pack(side=TOP, fill=X)

        # 创建中间的区域，支持上下拖动
        self.frame_middle = Frame(self, bd=1, relief=SUNKEN)
        self.frame_middle.pack(side=TOP, expand=YES, fill=BOTH)
        self.frame_middle.bind("<B1-Motion>", self.on_drag)

        # 在中间的区域中添加一些文本和图片
        self.text = Text(self.frame_middle)
        self.text.insert(END, "在这里添加一些文本")
        self.text.pack(side=LEFT, expand=YES, fill=BOTH)

        self.image = PhotoImage(file="images/wallpaper.png")
        self.canvas = Canvas(self.frame_middle, width=300, height=200, bg="white")
        self.canvas.create_image(0, 0, image=self.image, anchor=NW)
        self.canvas.pack(side=RIGHT, expand=YES, fill=BOTH)

        # 创建底部标签
        self.label_bottom = Label(self, text="底部标签")
        self.label_bottom.pack(side=BOTTOM, fill=X)

    def on_drag(self, event):
        # 处理中间区域的鼠标拖动事件
        dy = event.y - self.last_y
        self.last_y = event.y
        self.frame_middle.lift(self.canvas)
        self.frame_middle.lift(self.text)
        self.canvas.move(0, dy)
        self.text.move(0, dy)

    def on_press(self, event):
        # 处理中间区域的鼠标按下事件
        self.last_y = event.y

root = Tk()
root.geometry("400x400")
app = App(master=root)
app.mainloop()
