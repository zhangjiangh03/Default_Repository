import tkinter as tk
from tkinter import ttk

class ImageSlideshow:
    def __init__(self, root, img_list):
        self.root = root
        self.img_list = img_list

        self.img_slide = ttk.Frame(root)
        self.img_slide.pack()

        # 初始化第一张图片
        self.img = tk.PhotoImage(file = img_list[0])

        # 创建Label显示图片
        self.label_img = tk.Label(
            self.img_slide,
            image = self.img,
            padx = 0,
            pady = 0,
            bd = 0
        )
        self.label_img.pack(side = tk.TOP, anchor = tk.CENTER)
        self.label_img.config(height = 200)

        # 当前索引
        self.lead = 0

        # 调用轮播函数开始轮播
        root.after(3000, self.slideshow)

    def slideshow(self):
        # 更新索引,取模运算 % 来循环遍历一个图片列表 self.img_list 中的元素
        self.lead = (self.lead + 1) % len(self.img_list)

        # 更新图片
        self.img = tk.PhotoImage(file = self.img_list[self.lead])
        self.label_img.config(image = self.img)

        # 每 3 秒调用一次
        self.root.after(3000, self.slideshow)