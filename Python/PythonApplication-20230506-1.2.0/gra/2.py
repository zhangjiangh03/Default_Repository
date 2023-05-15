# import urllib.request
# import zipfile
# import os
#
# # 下载 ZIP 文件到本地
# url = "https://gitee.com/zhangjiangh03/data/repository/archive/main.zip"
# filename = "data.zip"
# urllib.request.urlretrieve(url, filename)
#
# # 解压文件到指定目录
# target_dir = "res"
# with zipfile.ZipFile(filename, "r") as zip_ref:
#     zip_ref.extractall(target_dir)
#
# # 删除文件
# os.remove(filename)
# os.remove(os.path.join(target_dir, "main"))
# os.remove(os.path.join(target_dir, "error.php"))


















#
# import tkinter as tk
#
# root = tk.Tk()
# root.geometry('400x300')
#
# # 创建一个 Canvas 组件，并绑定垂直滚动条
# canvas = tk.Canvas(root, borderwidth=0)
# scrollbar = tk.Scrollbar(root, orient="vertical", command=canvas.yview)
# scrollable_frame = tk.Frame(canvas)
#
# scrollable_frame.bind(
#     "<Configure>",
#     lambda e: canvas.configure(
#         scrollregion=canvas.bbox("all")
#     )
# )
#
# canvas.create_window((0, 0), window=scrollable_frame, anchor="nw")
# canvas.configure(yscrollcommand=scrollbar.set)
#
# # 添加 frame1
# frame1 = tk.Frame(scrollable_frame)
# frame1.pack(fill=tk.X, padx=10, pady=10)
# label1 = tk.Label(frame1, text=f"Frame 1")
# label1.pack()
#
# # 添加 frame6
# frame6 = tk.Frame(scrollable_frame)
# frame6.pack(fill=tk.X, padx=10, pady=10)
# label6 = tk.Label(frame6, text=f"Frame 6")
# label6.pack()
#
# # 添加 frame5
# frame5 = tk.Frame(scrollable_frame)
# frame5.pack(fill=tk.X, padx=10, pady=10)
# label5 = tk.Label(frame5, text=f"Frame 5")
# label5.pack()
#
# root.bind("<MouseWheel>", lambda event: canvas.yview_scroll(int(-1*(event.delta/120)), "units"))
#
# canvas.pack(side="left", fill="both", expand=True)
# scrollbar.pack(side="right", fill="y")
#
# root.mainloop()

#
#
# import tkinter as tk
#
# def scroll(event):
#     canvas.yview_scroll(int(-1*(event.delta/120)), "units")
#
# root = tk.Tk()
#
# # 创建一个Canvas组件，并设置其背景色
# canvas = tk.Canvas(root, bg="white", yscrollincrement=10)
#
# # 添加滚动条并绑定到Canvas组件
# scrollbar = tk.Scrollbar(root, command=canvas.yview)
# scrollbar.pack(side="right", fill="y")
# canvas.configure(yscrollcommand=scrollbar.set)
#
# # 在Canvas组件中添加多个Frame组件
# frame1 = tk.Frame(canvas, bg="red")
# frame2 = tk.Frame(canvas, bg="green")
# frame3 = tk.Frame(canvas, bg="blue")
#
# canvas.pack(fill="both", expand=True)
#
# # 将Frame组件添加到Canvas组件中
# canvas.create_window((0, 0), window=frame1, anchor="nw")
# canvas.create_window((0, 250), window=frame2, anchor="nw")
# canvas.create_window((0, 500), window=frame3, anchor="nw")
#
# # 更新Canvas组件的尺寸
# canvas.update_idletasks()
# canvas.config(scrollregion=canvas.bbox("all"))
#
# # 绑定鼠标滚轮事件
# canvas.bind("<MouseWheel>", scroll)
#
# root.mainloop()










#
# import os
# from tkinter import *
# import ttkbootstrap as ttk
#
# def textlist(filename: str):
#
#     # 测试数据
#     print(f"成功打开文件：{filename}")
#
#     # 新窗口
#     new_window = Toplevel()
#     new_window.title(os.path.basename(filename)[0])
#
#     # 按钮frame
#     button_frame = ttk.Frame(new_window)
#     button_frame.pack(side=TOP)
#     back_button = ttk.Button(button_frame, text="返回", command=new_window.destroy)
#     back_button.pack()
#
#     # 文字布局
#     text_frame = ttk.Frame(new_window)
#     text_frame.pack(side=TOP, fill=BOTH, expand=True)
#
#     # 滚动条
#     scroll = ttk.Scrollbar(text_frame)
#     scroll.pack(side=RIGHT, fill=Y)
#
#     # 文字盒子
#     text_box = ttk.Text(text_frame, yscrollcommand=scroll.set)
#     text_box.pack(side=TOP, fill=BOTH, expand=True)
#
#     # 打开文件
#     with open(filename, "r", encoding="utf-8") as f:
#         text_box.insert(END, f.read())
#     scroll.config(command=text_box.yview)
#
#
# def main():
#     root = Tk()
#     root.title("预览器")
#
#     # 窗口数据
#     screen_width, screen_height = root.winfo_screenwidth(), root.winfo_screenheight()
#     root.geometry(f"{screen_width - 470}x{screen_height - 140}")
#
#     # 跟部窗口
#     frame = Frame(root)
#     frame.pack(fill = BOTH, expand = True)
#
#     # 根窗口滚动数据
#     scrollbar = ttk.Scrollbar(frame, orient = VERTICAL)
#     scrollbar.pack(side = RIGHT, fill = Y)
#
#     # 画布设置
#     canvas = Canvas(frame, yscrollcommand=scrollbar.set)
#     canvas.pack(side=LEFT, fill=BOTH, expand=True)
#     scrollbar.config(command=canvas.yview)
#
#     inner_frame = Frame(canvas)
#     inner_frame_id = canvas.create_window((0, 0), window=inner_frame, anchor="n")
#
#     def on_canvas_resize(event):
#         canvas.config(scrollregion=canvas.bbox("all"), width=event.width)
#     canvas.bind("<Configure>", on_canvas_resize)
#
#     for filename in os.listdir("res"):
#         if os.path.splitext(filename)[1] == ".txt":
#             label = ttk.Label(inner_frame, text=os.path.splitext(filename)[0], font=16)
#             label.pack(padx=10, pady=10)
#             label.bind("<Button-1>", lambda e, f=filename: textlist(os.path.join("res", f)))
#
#     root.mainloop()
#
#
# if __name__ == "__main__":
#     main()
#






#
#

# import sys
# from PyQt5.QtCore import QUrl, Qt
# from PyQt5.QtWebEngineWidgets import QWebEngineView
# from PyQt5.QtWidgets import QApplication, QLabel, QWidget, QVBoxLayout, QHBoxLayout, QSizePolicy
# from PyQt5.QtGui import QFont
#
# class LinkLabel(QLabel):
#     def __init__(self, parent=None):
#         super().__init__(parent)
#         self.setText("<a href='https://www.baidu.com'>终端测试</a>")
#         self.setAlignment(Qt.AlignCenter)
#         self.setSizePolicy(QSizePolicy.Preferred, QSizePolicy.Preferred)
#         self.setMinimumSize(0, 50)
#         self.setMaximumSize(16777215, 50) # INT_MAX
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
#         vlayout = QVBoxLayout()
#         self.setLayout(vlayout)
#         self.setGeometry(50, 50, 800, 600)
#         self.setWindowTitle('Web Browser')
#         self.web_view = QWebEngineView(self)
#         vlayout.addWidget(self.web_view)
#
# if __name__ == '__main__':
#     app = QApplication(sys.argv)
#     label = LinkLabel()
#     label.show()
#     sys.exit(app.exec_())














#
#
# import sys
# from PyQt5.QtCore import QUrl, Qt
# from PyQt5.QtWebEngineWidgets import QWebEngineView
# from PyQt5.QtWidgets import QApplication, QLabel, QWidget, QVBoxLayout, QHBoxLayout, QSizePolicy
# from PyQt5.QtGui import QFont
#
# # 自定义链接标签类
# class LinkLabel(QLabel):
#     def __init__(self, url, parent=None):
#         super().__init__(parent)
#         self.url = url
#
#         self.browser = None                       # 浏览器窗口对象
#         self.link_clicked(self.url)               # 打开链接
#
#     def link_clicked(self, url):
#         if self.browser is None:                  # 如果浏览器窗口对象不存在，则新建窗口
#             self.browser = WebBrowser()
#         self.browser.web_view.setUrl(QUrl(url))   # 设置浏览器视图中显示的网页链接
#         self.browser.show()                       # 显示浏览器窗口
#
# # 浏览器窗口类
# class WebBrowser(QWidget):
#     def __init__(self):
#         super().__init__()
#         vlayout = QVBoxLayout()                   # 垂直布局
#         self.setLayout(vlayout)
#         self.setGeometry(50, 50, 800, 600)        # 设置窗口位置和大小
#         self.setWindowTitle('Web Browser')         # 设置窗口标题
#         self.web_view = QWebEngineView(self)       # 创建浏览器视图组件
#         vlayout.addWidget(self.web_view)           # 将浏览器视图组件添加到垂直布局中
#
# if __name__ == '__main__':
#     app = QApplication(sys.argv)
#     label = LinkLabel('https://www.baidu.com')    # 创建一个链接标签对象
#     label.show()                                  # 显示链接标签对象（实际上是打开链接）
#     sys.exit(app.exec_())                         # 运行Qt应用程序的主循环，等待窗口关闭









# import sys
# from PyQt5.QtCore import QUrl, Qt
# from PyQt5.QtWebEngineWidgets import QWebEngineView
# from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout
#
# # 浏览器窗口类
# class WebBrowser(QWidget):
#     def __init__(self):
#         super().__init__()
#         vlayout = QVBoxLayout()                   # 垂直布局
#         self.setLayout(vlayout)
#         self.setGeometry(50, 50, 800, 600)        # 设置窗口位置和大小
#         self.setWindowTitle('Web Browser')         # 设置窗口标题
#         self.web_view = QWebEngineView(self)       # 创建浏览器视图组件
#         vlayout.addWidget(self.web_view)           # 将浏览器视图组件添加到垂直布局中
#         self.web_view.load(QUrl("https://www.baidu.com"))   # 加载网页链接
#
# if __name__ == '__main__':
#     app = QApplication(sys.argv)  # 创建一个 PyQt 应用程序对象
#
#     browser = WebBrowser()        # 创建浏览器窗口对象
#     browser.show()                # 显示浏览器窗口
#
#     sys.exit(app.exec_())         # 运行 PyQt 应用程序的主循环，等待窗口关闭并退出程序运行


# import sys
# from PyQt5.QtCore import QUrl, Qt
# from PyQt5.QtWebEngineWidgets import QWebEngineView, QWebEngineScript
# from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout
#
#
# # 浏览器窗口类
# class WebBrowser(QWidget):
#     def __init__(self):
#         super().__init__()
#         vlayout = QVBoxLayout()  # 垂直布局
#         self.setLayout(vlayout)
#         self.setGeometry(50, 50, 800, 600)  # 设置窗口位置和大小
#         self.setWindowTitle('Web Browser')  # 设置窗口标题
#         self.web_view = QWebEngineView(self)  # 创建浏览器视图组件
#
#         # 创建 JavaScript 代码，屏蔽 body 标签
#         # script = QWebEngineScript()
#         # script.setSourceCode("""
#         #     document.getElementsByTagName("body")[0].style.display = "none";
#         # """)
#         # self.web_view.page().scripts().insert(script)
#
#         vlayout.addWidget(self.web_view)  # 将浏览器视图组件添加到垂直布局中
#         self.web_view.load(QUrl("https://zhangjiangh03.github.io/2022/09/30/Programming_Languages/C/%E5%88%9B%E5%BB%BAC%E8%AF%AD%E8%A8%80%E9%A1%B9%E7%9B%AE/"))  # 加载网页链接
#
#
# if __name__ == '__main__':
#     app = QApplication(sys.argv)  # 创建一个 PyQt 应用程序对象
#
#     browser = WebBrowser()  # 创建浏览器窗口对象
#     browser.show()  # 显示浏览器窗口
#
#     sys.exit(app.exec_())  # 运行 PyQt 应用程序的主循环，等待窗口关闭并退出程序运行







import sys
from PyQt5.QtCore import QUrl, Qt
from PyQt5.QtWebEngineWidgets import QWebEngineView, QWebEngineScript
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout, QProgressBar


# 浏览器窗口类
class WebBrowser(QWidget):
    def __init__(self):
        super().__init__()
        vlayout = QVBoxLayout()  # 垂直布局
        self.setLayout(vlayout)
        self.setGeometry(50, 50, 800, 600)  # 设置窗口位置和大小
        self.setWindowTitle('Web Browser')  # 设置窗口标题
        self.web_view = QWebEngineView(self)  # 创建浏览器视图组件



        self.progress_bar = QProgressBar(self)  # 创建进度条
        self.progress_bar.setMaximumWidth(120)  # 设置进度条的最大宽度
        self.progress_bar.setValue(0)  # 初始化进度条为0
        vlayout.addWidget(self.progress_bar)  # 将进度条添加到垂直布局中
        vlayout.addWidget(self.web_view)  # 将浏览器视图组件添加到垂直布局中
        self.web_view.load(QUrl("https://zhangjiangh03.github.io/2022/09/30/Programming_Languages/C/%E5%88%9B%E5%BB%BAC%E8%AF%AD%E8%A8%80%E9%A1%B9%E7%9B%AE/"))  # 加载网页链接

        self.web_view.loadProgress.connect(self.onLoadProgress)  # 连接加载进度信号和槽函数

    def onLoadProgress(self, progress):
        self.progress_bar.setValue(progress)  # 设置进度条的值


if __name__ == '__main__':
    app = QApplication(sys.argv)  # 创建一个 PyQt 应用程序对象

    browser = WebBrowser()  # 创建浏览器窗口对象
    browser.show()  # 显示浏览器窗口

    sys.exit(app.exec_())  # 运行 PyQt 应用程序的主循环，等待窗口关闭并退出程序运行

# # 创建 JavaScript 代码，屏蔽 body 标签
# script = QWebEngineScript()
# script.setSourceCode("""
#     var elems = document.querySelectorAll('nav[class="navbar"]');
#     for(var i = 0; i < elems.length; i++) {
#         elems[i].style.display = "none";
#     }
#
#     var scrollButton = document.getElementById("scrollbutton");
#     if (scrollButton != null) {
#         scrollButton.style.display = "none";
#     }
#
#     var menuButton = document.getElementById("menubutton");
#     if (menuButton != null) {
#         menuButton.style.display = "none";
#     }
#
#     var popButton = document.getElementById("popbutton");
#     if (popButton != null) {
#         popButton.style.display = "none";
#     }
#
#     var darkButton = document.getElementById("darkbutton");
#     if (darkButton != null) {
#         darkButton.style.display = "none";
#     }
#
#     var searchButton = document.getElementById("searchbutton");
#     if (searchButton != null) {
#         searchButton.style.display = "none";
#     }
#
#     var rightColumn = document.querySelector('.right-column');
#     if (rightColumn != null) {
#         rightColumn.style.display = "none";
#     }
#
#     var leftColumn = document.querySelector('.left-column');
#     if (leftColumn != null) {
#         leftColumn.style.display = "none";
#     }
#
#     var postNote = document.querySelector('.post-note');
#     if (postNote != null) {
#         postNote.style.display = "none";
#     }
#
#     var nav = document.querySelector('.nav');
#     if (nav != null) {
#         nav.style.display = "none";
#     }
#
#     var footer = document.querySelector('.footer');
#     if (footer != null) {
#         footer.style.display = "none";
#     }
# """)
# self.web_view.page().scripts().insert(script)















# import sys
# from PyQt5.QtCore import QUrl, Qt
# from PyQt5.QtWebEngineWidgets import QWebEngineView
# from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout
#
# # 浏览器窗口类
# class 浏览器窗口(QWidget):
#     def __init__(self):
#         super().__init__()
#         垂直布局 = QVBoxLayout()                                 # 创建垂直布局管理器
#         self.setLayout(垂直布局)
#         self.setGeometry(50, 50, 800, 600)                        # 设置窗口位置和大小
#         self.setWindowTitle('浏览器窗口')                         # 设置窗口标题
#         self.网页视图 = QWebEngineView(self)                       # 创建网页视图组件
#         垂直布局.addWidget(self.网页视图)                        # 将网页视图组件添加到布局中
#         self.网页视图.load(QUrl("https://www.baidu.com"))       # 加载网页链接
#
# if __name__ == '__main__':
#     # 创建 PyQt 应用程序对象
#     应用程序 = QApplication(sys.argv)
#
#     # 创建浏览器窗口对象，并显示浏览器窗口
#     浏览器窗口对象 = 浏览器窗口()
#     浏览器窗口对象.show()
#
#     # 运行 PyQt 应用程序的主循环，等待窗口关闭并退出程序运行
#     sys.exit(应用程序.exec_())











#
#
# #
# import os
# from tkinter import *
# import ttkbootstrap as ttk
# import webbrowser
#
# def html_show(filename: str):
#     # 测试数据
#     print(f"成功打开文件：{filename}")
#
#     # 新窗口
#     new_window = Toplevel()
#     new_window.title(f"预览器 - {os.path.basename(filename)[0]}")
#
#     # HTML文本框布局
#     text_frame = ttk.Frame(new_window)
#     text_frame.pack(side=LEFT, fill=BOTH, expand=True)
#
#     # HTML文本框滚动条
#     scroll = ttk.Scrollbar(text_frame)
#     scroll.pack(side=RIGHT, fill=Y)
#
#     # HTML文本框
#     html_box = ttk.Text(text_frame, yscrollcommand=scroll.set)
#     html_box.pack(side=LEFT, fill=BOTH, expand=True)
#
#     # 查看源代码按钮
#     view_button = ttk.Button(new_window, text="查看源代码",
#                              command=lambda: text_show(filename))
#     view_button.pack(side=TOP, padx=10, pady=10)
#
#     # 打开网页
#     webbrowser.open(f"file://{os.path.abspath(filename)}")
#
#     # 读取HTML文件
#     with open(filename, "rb") as f:
#         html_data = f.read()
#     html_box.insert(END, html_data.decode("utf-8"))
#     scroll.config(command=html_box.yview)
#
#
# def text_show(filename: str):
#     # 新窗口
#     new_window = Toplevel()
#     new_window.title(f"预览器 - {os.path.basename(filename)[0]}")
#
#     # 按钮frame
#     button_frame = ttk.Frame(new_window)
#     button_frame.pack(side=TOP)
#     back_button = ttk.Button(
#         button_frame, text="返回", command=new_window.destroy)
#     back_button.pack()
#
#     # 文字布局
#     text_frame = ttk.Frame(new_window)
#     text_frame.pack(side=TOP, fill=BOTH, expand=True)
#
#     # 滚动条
#     scroll = ttk.Scrollbar(text_frame)
#     scroll.pack(side=RIGHT, fill=Y)
#
#     # 文字盒子
#     text_box = ttk.Text(text_frame, yscrollcommand=scroll.set)
#     text_box.pack(side=TOP, fill=BOTH, expand=True)
#
#     # 打开文件
#     with open(filename, "r", encoding="utf-8") as f:
#         text_box.insert(END, f.read())
#     scroll.config(command=text_box.yview)
#
#
# def main():
#     root = Tk()
#     root.title("文章阅读器")
#
#     # 窗口数据
#     screen_width, screen_height = root.winfo_screenwidth(), root.winfo_screenheight()
#     root.geometry(f"{screen_width - 470}x{screen_height - 140}")
#
#     # 跟部窗口
#     frame = Frame(root)
#     frame.pack(fill=BOTH, expand=True)
#
#     # 根窗口滚动数据
#     scrollbar = ttk.Scrollbar(frame, orient=VERTICAL)
#     scrollbar.pack(side=RIGHT, fill=Y)
#
#     # 画布设置
#     canvas = Canvas(frame, yscrollcommand=scrollbar.set)
#     canvas.pack(side=LEFT, fill=BOTH, expand=True)
#     # 绑定鼠标滚轮事件
#     canvas.bind("<MouseWheel>", lambda event: canvas.yview_scroll(int(-1*(event.delta/120)), "units"))
#     scrollbar.config(command=canvas.yview)
#
#     inner_frame = Frame(canvas)
#     inner_frame_id = canvas.create_window((0, 0), window=inner_frame, anchor="n")
#
#     def on_canvas_resize(event):
#         canvas.config(scrollregion=canvas.bbox("all"), width=event.width)
#
#     canvas.bind("<Configure>", on_canvas_resize)
#
#     for filename in os.listdir("res"):
#         if os.path.splitext(filename)[1] in [".txt", ".html", ".htm"]:
#             label = ttk.Label(inner_frame, text=os.path.splitext(
#                 filename)[0], font=16, cursor="hand2")
#             label.pack(padx=10, pady=10)
#             label.bind("<Button-1>", lambda e, f=filename: html_show(os.path.join("res", f))
#                        if os.path.splitext(f)[1] in [".html", ".htm"]
#                        else text_show(os.path.join("res", f)))
#
#     root.mainloop()
#
#
#
# if __name__ == "__main__":
#     main()
#

#
#
# import os
# from tkinter import *
# import ttkbootstrap as ttk
# import webbrowser
#
# from tkinterhtml import HtmlFrame
#
#
# def html_show(filename: str):
#     # 测试数据
#     print(f"成功打开文件：{filename}")
#
#     with open(filename, "r", encoding="utf-8") as f:
#         html_data = f.read()
#
#     # 新窗口
#     new_window = Toplevel()
#     new_window.title(f"预览器 - {os.path.basename(filename)}")
#
#     # WebView窗口
#     web_view = HtmlFrame(new_window, horizontal_scrollbar="auto")
#     web_view.pack(side=TOP, fill=BOTH, expand=True)
#     web_view.set_content(html_data)
#
#
# def text_show(filename: str):
#     # 新窗口
#     new_window = Toplevel()
#     new_window.title(f"预览器 - {os.path.basename(filename)}")
#
#     # 按钮frame
#     button_frame = ttk.Frame(new_window)
#     button_frame.pack(side=TOP)
#     back_button = ttk.Button(
#         button_frame, text="返回", command=new_window.destroy)
#     back_button.pack()
#
#     # 文字布局
#     text_frame = ttk.Frame(new_window)
#     text_frame.pack(side=TOP, fill=BOTH, expand=True)
#
#     # 滚动条
#     scroll = ttk.Scrollbar(text_frame)
#     scroll.pack(side=RIGHT, fill=Y)
#
#     # 文字盒子
#     text_box = ttk.Text(text_frame, yscrollcommand=scroll.set)
#     text_box.pack(side=TOP, fill=BOTH, expand=True)
#
#     # 打开文件
#     with open(filename, "r", encoding="utf-8") as f:
#         text_box.insert(END, f.read())
#     scroll.config(command=text_box.yview)
#
#
# def main():
#     root = Tk()
#     root.title("预览器")
#
#     # 窗口数据
#     screen_width, screen_height = root.winfo_screenwidth(), root.winfo_screenheight()
#     root.geometry(f"{screen_width - 470}x{screen_height - 140}")
#
#     # 跟部窗口
#     frame = Frame(root)
#     frame.pack(fill=BOTH, expand=True)
#
#     # 根窗口滚动数据
#     scrollbar = ttk.Scrollbar(frame, orient=VERTICAL)
#     scrollbar.pack(side=RIGHT, fill=Y)
#
#     # 画布设置
#     canvas = Canvas(frame, yscrollcommand=scrollbar.set)
#     canvas.pack(side=LEFT, fill=BOTH, expand=True)
#     scrollbar.config(command=canvas.yview)
#
#     inner_frame = Frame(canvas)
#     inner_frame_id = canvas.create_window((0, 0), window=inner_frame, anchor="n")
#
#     def on_canvas_resize(event):
#         canvas.config(scrollregion=canvas.bbox("all"), width=event.width)
#     canvas.bind("<Configure>", on_canvas_resize)
#
#     for filename in os.listdir("res"):
#         if os.path.splitext(filename)[1] in [".txt", ".html", ".htm"]:
#             label = ttk.Label(inner_frame, text=os.path.splitext(
#                 filename)[0], font=16, cursor="hand2")
#             label.pack(padx=10, pady=10)
#             label.bind("<Button-1>", lambda e, f=filename: html_show(os.path.join("res", f))
#                        if os.path.splitext(f)[1] in [".html", ".htm"]
#                        else text_show(os.path.join("res", f)))
#
#     root.mainloop()
#
#
# if __name__ == "__main__":
#     main()



#
#
# import os
# import socketserver
# import threading
# import urllib.request
# from http.server import SimpleHTTPRequestHandler, HTTPServer
# from tkinter import *
# import ttkbootstrap as ttk
#
#
# class ServerThread(threading.Thread):
#     def __init__(self, port):
#         threading.Thread.__init__(self)
#         self.daemon = True
#         self.port = port
#
#     def run(self):
#         Handler = SimpleHTTPRequestHandler
#         with HTTPServer(("localhost", self.port), Handler) as httpd:
#             httpd.serve_forever()
#
#
# class WebView(Frame):
#     def __init__(self, master, port):
#         Frame.__init__(self, master)
#         self.pack(fill=BOTH, expand=True)
#         self.master.protocol("WM_DELETE_WINDOW", self.quit)
#         self.port = port
#         self.html_file = None
#         self.server_thread = None
#
#         self.webview = ttk.Frame(self)
#         self.webview.pack(side=LEFT, fill=BOTH, expand=True)
#
#         scrollbar = ttk.Scrollbar(self.webview, orient=VERTICAL)
#         scrollbar.pack(side=RIGHT, fill=Y)
#         canvas = Canvas(self.webview, yscrollcommand=scrollbar.set)
#         canvas.pack(side=LEFT, fill=BOTH, expand=True)
#         scrollbar.config(command=canvas.yview)
#
#         self.inner_frame = ttk.Frame(canvas)
#         self.inner_frame_id = canvas.create_window((0, 0), window=self.inner_frame, anchor="nw")
#         canvas.bind("<Configure>", self.on_canvas_resize)
#
#     def on_canvas_resize(self, event):
#         self.inner_frame.configure(width=event.width)
#
#     def set_html_file(self, filename):
#         self.html_file = filename
#         self.load()
#
#     def set_url(self, url):
#         self.url = url
#         self.load()
#
#     def load(self):
#         if self.server_thread is None:
#             self.server_thread = ServerThread(self.port)
#             self.server_thread.start()
#
#         if self.html_file:
#             with open(self.html_file) as f:
#                 html = f.read()
#                 self.inner_frame.master = self
#                 self.webview.after(0, lambda: self.webview.update({
#                     "title": os.path.basename(self.html_file),
#                     "html": html
#                 }))
#
#         elif self.url:
#             req = urllib.request.urlopen(self.url)
#             charset = req.headers.get_content_charset()
#             html = req.read().decode(charset)
#             self.inner_frame.master = self
#             self.webview.after(0, lambda: self.webview.update({
#                 "title": self.url,
#                 "html": html
#             }))
#
#     def start(self):
#         self.load()
#
#     def stop(self):
#         if self.server_thread:
#             self.server_thread._stop()
#
#
# def main():
#     root = Tk()
#     root.title("预览器")
#     screen_width, screen_height = root.winfo_screenwidth(), root.winfo_screenheight()
#     root.geometry(f"{screen_width - 470}x{screen_height - 140}")
#
#     frame = Frame(root)
#     frame.pack(fill=BOTH, expand=True)
#
#     scrollbar = ttk.Scrollbar(frame, orient=VERTICAL)
#     scrollbar.pack(side=RIGHT, fill=Y)
#     canvas = Canvas(frame, yscrollcommand=scrollbar.set)
#     canvas.pack(side=LEFT, fill=BOTH, expand=True)
#     scrollbar.config(command=canvas.yview)
#
#     inner_frame = ttk.Frame(canvas)
#     inner_frame_id = canvas.create_window((0, 0), window=inner_frame, anchor="n")
#
#     def on_canvas_resize(event):
#         canvas.configure(scrollregion=canvas.bbox("all"), width=event.width)
#     canvas.bind("<Configure>", on_canvas_resize)
#
#     for filename in os.listdir("res"):
#         if os.path.splitext(filename)[1] in [".txt", ".html", ".htm"]:
#             label = ttk.Label(inner_frame, text=os.path.splitext(
#                 filename)[0], font=16, cursor="hand2")
#             label.pack(padx=10, pady=10)
#             label.bind("<Button-1>", lambda e, f=filename: WebView(Toplevel(), 8000).set_html_file(os.path.join("res", f))
#                        if os.path.splitext(f)[1] in [".html", ".htm"]
#                        else text_show(os.path.join("res", f)))
#
#     root.mainloop()
#
#
# if __name__ == "__main__":
#     main()

