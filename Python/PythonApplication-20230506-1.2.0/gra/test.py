import requests
import io
from PIL import ImageTk, Image
import tkinter as tk
import ttkbootstrap as ttk
from wordcloud import WordCloud
from bs4 import BeautifulSoup

# from app._page_category_left import page_category_left_active
# from app._page_category_center import page_category_center_active
# from app._page_category_right import page_category_right_active
#
# def slideshow():
#     global img_temp, img
#     # 更新图片索引
#     img_temp = (img_temp + 1) % len(img_list)
#     # 更新图片
#     img = tk.PhotoImage(file = img_list[img_temp])
#     label_img.config(image = img)
#     # 每 3 秒调用一次
#     root.after(3000, slideshow)
#
# def create_category_frame(root):
#     page_category = ttk.Frame(root)
#
#     width_temp = root.winfo_width()
#
#     width_temp = 30
#
#     page_category_left = ttk.Labelframe(page_category, text="Info", bootstyle="info")
#     tk.Label(page_category_left, text="校园资讯\n",
#              font=30, width=width_temp).pack(pady=(20, 10))
#     ttk.Button(page_category_left, text="查看",
#                 bootstyle="primary", command=page_category_left_active).pack(padx=10, pady=(0, 10))
#
#     page_category_center = ttk.Labelframe(page_category, text="Club", bootstyle="info")
#     tk.Label(page_category_center, text="社团\n",
#              font=30, width=width_temp).pack(pady=(20, 10))
#     ttk.Button(page_category_center, text="查看",
#                 bootstyle="primary", command=page_category_center_active).pack(padx=10, pady=(0, 10))
#
#     page_category_right = ttk.Labelframe(page_category, text="Q&A", bootstyle="info")
#     tk.Label(page_category_right, text="凯院问答\n",
#              font=30, width=width_temp).pack(pady=(20, 10))
#     ttk.Button(page_category_right, text="查看",
#                 bootstyle="primary", command=page_category_right_active).pack(padx=10, pady=(0, 10))
#
#     page_category_left.pack(side=tk.LEFT, anchor=tk.NW, padx=20, pady=20)
#     page_category_center.pack(side=tk.LEFT, anchor=tk.N, padx=20, pady=20)
#     page_category_right.pack(side=tk.LEFT, anchor=tk.NE, padx=20, pady=20)
#
#     separator = ttk.Separator(root, bootstyle="info")
#     separator.pack()
#
#     return page_category
#
# def create_wordcloud_frame(root):
#     page_wordcloud = ttk.Frame(root)
#
#     url = "https://gitee.com/zhangjiangh03/temp/raw/master/1.txt"
#     response = requests.get(url)
#     html_content = response.text
#
#     # 读写文件
#     with open("resource/wordcloud.txt", "w", encoding="utf-8") as f:
#         f.write(html_content)
#     with open("resource/wordcloud.txt", "r", encoding="utf-8") as f:
#         file_content = f.read()
#
#     # 生成词云图
#     wordcloud = WordCloud(background_color="white").generate(file_content)
#
#     def image_to_PhotoImage(image):
#         imgByteArr = io.BytesIO()
#         image.save(imgByteArr, format='PNG')
#         imgByteArr = imgByteArr.getvalue()
#         photo = ImageTk.PhotoImage(data=imgByteArr)
#         return photo
#
#     image = wordcloud.to_image()
#
#     photo = image_to_PhotoImage(image)
#
#     label_page_wordcloud = tk.Label(
#         page_wordcloud, text="\n", font=30)
#     label_page_wordcloud.pack()
#
#     label_wordcloud = tk.Label(page_wordcloud, image=photo)
#     label_wordcloud.pack(side=tk.TOP, anchor=tk.N)
#     label_wordcloud.config(height=200)
#
#     return page_wordcloud





def main():
    # 创建一个根窗口对象和设置窗口标题
    root = tk.Tk()
    root.title("大通讯")

    # 设置默认窗口
    screen_width, screen_height = root.winfo_screenwidth(), root.winfo_screenheight()
    root.geometry(f"{screen_width - 160}x{screen_height - 140}")
    root.minsize(screen_width - 470, screen_height - 140)
    root.maxsize(screen_width, screen_height)
    # root.resizable(False, False) # 禁止变化

    # 标题
    communication_title = ttk.Frame(root)
    communication_title.pack()

    tk.Label(
        communication_title,
        text = "大通讯",
        font = 30,
        pady = 20
    ).pack()




    # # 文字标题
    # page_title = ttk.Frame(root)
    # page_title.pack()
    # tk.Label(page_title, text="大通讯",
    #          font=30, padx=30, pady=30).pack()
    #
    # 轮播图
    page_img = ttk.Frame(root)
    page_img.pack()

    # 轮播图路径
    img_list = ["resource/images/wallpaper.png",
                "resource/images/WechatPay.png"]

    # 初始化
    img = tk.PhotoImage(file=img_list[0])
    label_img = tk.Label(
        page_img, image=img, padx=0, pady=0, bd=0)
    label_img.pack(side=tk.TOP, anchor=tk.CENTER)
    label_img.config(height=200)

    global img_temp
    img_temp = 0

    def slideshow():
        global img_temp, img
        # 更新图片索引
        img_temp = (img_temp + 1) % len(img_list)
        # 更新图片
        img = tk.PhotoImage(file=img_list[img_temp])
        label_img.config(image=img)
        # 每 3 秒调用一次
        root.after(3000, slideshow)

    root.after(3000, slideshow)
    #
    # page_category = create_category_frame(root)
    # page_wordcloud = create_wordcloud_frame(root)
    #
    # page_category.pack()
    # page_wordcloud.pack()

    root.mainloop()


if __name__ == "__main__":
    main()



# 轮播图
    page_img = ttk.Frame(root)
    page_img.pack()

    # 轮播图路径
    img_list = ["resource/images/wallpaper.png",
                "resource/images/WechatPay.png"]

    # 初始化
    img = tk.PhotoImage(file=img_list[0])
    label_img = tk.Label(
        page_img, image=img, padx=0, pady=0, bd=0)
    label_img.pack(side=tk.TOP, anchor=tk.CENTER)
    label_img.config(height=200)

    global img_temp
    img_temp = 0

    def slideshow():
        global img_temp, img
        # 更新图片索引
        img_temp = (img_temp + 1) % len(img_list)
        # 更新图片
        img = tk.PhotoImage(file=img_list[img_temp])
        label_img.config(image=img)
        # 每 3 秒调用一次
        root.after(3000, slideshow)

    root.after(3000, slideshow)