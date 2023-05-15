# -*- coding: UTF-8 -*-
import tkinter as tk
from tkinter import ttk






class App(ttk.Frame):
    def __init__(self, parent):
        # 初始化函数
        ttk.Frame.__init__(self)

        # 设置响应式布局
        for index in [0, 1, 2]:
            self.columnconfigure(index=index, weight=1)
            self.rowconfigure(index=index, weight=1)

        # 创建值列表
        self.option_menu_list = ["", "OptionMenu", "Option 1", "Option 2"]

        # 创建窗口部件
        self.setup_widgets()

    def setup_widgets(self):

        # 创建 Panedwindow 部件
        self.paned = ttk.PanedWindow(self)
        self.paned.grid(row=0, column=1, pady=(5, 5), sticky="nsew", rowspan=3)

        # 在 Panedwindow 中创建 Notebook 部件，Pane #2
        self.pane_2 = ttk.Frame(self.paned, padding=10)
        self.paned.add(self.pane_2, weight=1)

        # 创建 Notebook 部件的 Tab #1
        self.notebook = ttk.Notebook(self.pane_2)
        self.notebook.pack(fill="both", expand=True)

        # 创建 Label 部件，并加入到 Tab #1 中
        self.tab_1 = ttk.Frame(self.notebook)
        for index in [0, 1]:
            self.tab_1.columnconfigure(index=index, weight=1)
            self.tab_1.rowconfigure(index=index, weight=1)

        self.notebook.add(self.tab_1, text="标签1")
        self.label = ttk.Label(
            self.tab_1,
            text="123",
            justify="center",
            font=("-size", 15, "-weight", "bold"),
        )
        self.label.grid(row=1, column=0, pady=10, columnspan=2)

        # 在 Notebook 中创建 Tab #2 和 Tab #3
        self.tab_2 = ttk.Frame(self.notebook)
        self.notebook.add(self.tab_2, text="标签2")

        self.tab_3 = ttk.Frame(self.notebook)
        self.notebook.add(self.tab_3, text="标签3")