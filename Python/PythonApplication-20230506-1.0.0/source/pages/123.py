import tkinter as tk

root = tk.Tk()
root.title("图文介绍页面")

# 获取屏幕宽度和高度
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()

# 设置默认窗口大小为屏幕大小
root.geometry("%dx%d+0+0" % (screen_width, screen_height))

# 创建滚动条组件
scrollbar = tk.Scrollbar(root)
scrollbar.pack(side='right', fill='y')

# 读取并添加文本内容
with open('1.txt', 'r', encoding='utf-8') as f:
    text = f.read()
text_widget = tk.Text(root, wrap='word', yscrollcommand=scrollbar.set)
text_widget.pack(expand='true', fill='both')
text_widget.insert('end', text)
text_widget.config(state='disabled') # 文本内容不可编辑

# 添加图片并计算图片位置和大小
img = tk.PhotoImage(file="wallpaper.png")
img_width = img.width()
img_height = img.height()
start_x = (screen_width - img_width) // 2
start_y = 50 + text_widget.winfo_height() # 图片位于文本框下方

# 创建Label，放置图片并使其随窗口大小自动调节
img_label = tk.Label(root, image=img)
img_label.place(x=start_x, y=start_y)
img_label.bind('<Configure>', lambda event: img_label.config(width=event.width, height=event.height))

# 滚动条与Text组件互相绑定
scrollbar.config(command=text_widget.yview)

root.mainloop()
