from tkinter import messagebox
import webbrowser

class Club:

    def __init__(self, title):
        webbrowser.open('https://www.baidu.com')
        messagebox.showinfo('跳转提示', '请跳转浏览器查看')
