# -*- coding: UTF-8 -*-
import tkinter as tk

# from PIL import ImageTk, Image
# import urllib.request

from source.info import version_print
from source.pages.index import App

if __name__ == "__main__":
    version_print()

    root = tk.Tk()
    root.title("KaiYuanDaonan 1.0.0-beta")

    # image_list = []
    # url = "https://api.asxe.vip/scenery.php"
    # filename, headers = urllib.request.urlretrieve(url)
    # img = Image.open(filename)
    # photo = ImageTk.PhotoImage(img)
    #
    # background_label = tk.Label(root, image=photo)
    # background_label.place(x=0, y=0, relwidth=1, relheight=1)
    #
    # # 将 PhotoImage 对象保存到全局变量中
    # image_list.append(photo)

    # 设置主题
    root.tk.call("source", "Azure-ttk-theme/azure.tcl")
    root.tk.call("set_theme", "light")

    app = App(root)
    app.pack(fill="both", expand=True)

    # 设置窗口的最小尺寸，并将其放在中间
    root.update()
    root.minsize(root.winfo_width(), root.winfo_height())
    x_cordinate = int((root.winfo_screenwidth() / 2) - (root.winfo_width() / 2))
    y_cordinate = int((root.winfo_screenheight() / 2) - (root.winfo_height() / 2))
    root.geometry("+{}+{}".format(x_cordinate, y_cordinate-20))

    root.mainloop()