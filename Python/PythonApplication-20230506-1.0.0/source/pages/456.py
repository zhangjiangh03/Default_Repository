import tkinter as tk


class IntroductionApp:
    def __init__(self, master):
        self.master = master
        self.master.title("Introduction")

        # 获取电脑屏幕的尺寸
        screen_width = self.master.winfo_screenwidth()
        screen_height = self.master.winfo_screenheight()

        # 设置窗口默认大小为屏幕大小
        self.master.geometry("{}x{}".format(screen_width, screen_height))

        # 标题
        self.title_label = tk.Label(self.master, text="Welcome to Tkinter", font=("Arial", 24), pady=20)
        self.title_label.pack(side="top", fill="x")

        # 主框架
        self.main_frame = tk.Frame(self.master)
        self.main_frame.pack(side="top", fill="both", expand=True)

        # 创建可滚动区域
        self.canvas = tk.Canvas(self.main_frame, bg="white")
        self.scrollbar = tk.Scrollbar(self.main_frame, orient="vertical", command=self.canvas.yview)
        self.scrollable_frame = tk.Frame(self.canvas)

        # 将滚动条绑定到可滚动区域上
        self.canvas.configure(yscrollcommand=self.scrollbar.set)
        self.canvas.bind('<Configure>', lambda e: self.canvas.configure(scrollregion=self.canvas.bbox("all")))
        self.canvas.create_window((0, 0), window=self.scrollable_frame, anchor="nw")

        # 添加文本
        text = "The tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk  tkinter package is the standard Python interface to the Tcl/Tk GUI toolkit. Both Tk and tkinter are available on most Unix platforms, including macOS, as well as on Windows systems. Tkinter provides a powerful object-oriented interface for GUI programming in Python. It is a standard Python library and is included with most Python installations. With Tkinter, you can create windows, widgets, menus, and buttons for your Python applications. "
        self.text_label = tk.Label(self.scrollable_frame, text=text, font=("Arial", 16), justify="left")
        self.text_label.pack(side="top", fill="both", expand=True)

        # 响应式布局
        self.master.columnconfigure(0, weight=1)
        self.master.rowconfigure(0, weight=1)
        self.main_frame.columnconfigure(0, weight=1)
        self.main_frame.rowconfigure(0, weight=1)
        self.scrollable_frame.columnconfigure(0, weight=1)

        # 显示滚动条和可滚动区域
        self.scrollbar.pack(side="right", fill="y")
        self.canvas.pack(side="left", fill="both", expand=True)


root = tk.Tk()
app = IntroductionApp(root)
root.mainloop()
