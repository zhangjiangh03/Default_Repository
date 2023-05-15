class DefaultWindow:
    def __init__(self, root):
        self.root = root
        self.set_default_window()

    # 设置默认窗口
    def set_default_window(self):
        screen_width, screen_height = self.root.winfo_screenwidth(), self.root.winfo_screenheight()

        self.root.geometry(f"{screen_width - 470}x{screen_height - 140}")

        # 最小限制
        self.root.minsize(screen_width - 470, screen_height - 140)

        # 最大限制
        self.root.maxsize(screen_width, screen_height)

        # 禁止窗口变化
        # self.root.resizable(False, False)

        # 返回窗口对象
        return self.root

    def mainloop(self):
        self.root.mainloop()