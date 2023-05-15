from tkinter import messagebox
import webbrowser

class Info:

    def __init__(self, title):
        webbrowser.open('https://zhangjiangh03.github.io/')
        messagebox.showinfo('跳转提示', '请跳转浏览器查看')
