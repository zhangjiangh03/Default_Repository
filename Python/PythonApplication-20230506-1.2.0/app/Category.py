import tkinter as tk
import ttkbootstrap as ttk

from app.Info import Info
from app.Club import Club
from app.FAQs import FAQs

class Category:
    def __init__(self, root):
        self.root = root
        self.category_widgets()

    def category_widgets(self):
        self.category = ttk.Frame(self.root)
        self.category.pack()

        self.label_width = self.root.winfo_width()

        self.label_width = 30

        self.Info = ttk.Labelframe(self.category, text = "Info", bootstyle = "info")
        self.Info.pack(side=tk.LEFT, anchor=tk.NW, padx = 20, pady = 20)

        tk.Label(
            self.Info,
            text = "校园资讯\n",
            font = 30,
            width = self.label_width
        ).pack(pady = (20, 10))

        ttk.Button(
            self.Info,
            text = "查看",
            bootstyle = "primary",
            command = lambda: Info("Info 校园资讯")
        ).pack(padx = 10, pady = (0, 10))

        self.Club = ttk.Labelframe(self.category, text = "Club", bootstyle = "success")
        self.Club.pack(side=tk.LEFT, anchor=tk.N, padx = 20, pady = 20)

        tk.Label(
            self.Club,
            text = "社团\n",
            font = 30,
            width = self.label_width
        ).pack(pady = (20, 10))

        ttk.Button(
            self.Club,
            text = "查看",
            bootstyle = "primary",
            command = lambda: Club("Club 社团")
        ).pack(padx = 10, pady = (0, 10))

        self.FAQs = ttk.Labelframe(self.category, text = "FAQs", bootstyle = "info")
        self.FAQs.pack(side=tk.LEFT, anchor=tk.NE, padx = 20, pady = 20)

        tk.Label(
            self.FAQs,
            text = "凯院问答\n",
            font = 30,
            width = self.label_width
        ).pack(pady = (20, 10))

        ttk.Button(
            self.FAQs,
            text = "查看",
            bootstyle = "primary",
            command = lambda: FAQs("FAQs 凯院问答")
        ).pack(padx = 10, pady = (0, 10))

        # 分割线与文字组件
        self.separator = ttk.Separator(self.root, bootstyle = "info")
        self.separator.pack()
        self.interval = ttk.Frame(self.root)
        self.interval.pack()

        tk.Label(
            self.interval,
            text = "热点一栏\n",
            font = 30
        ).pack(pady = (20, 0))
