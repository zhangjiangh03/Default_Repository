import tkinter as tk
import ttkbootstrap as ttk

from app.DefaultWindow import DefaultWindow # 窗口设置
from app.ImageSlideshow import ImageSlideshow # 轮播图
from app.Category import Category # 分类
from app.UniteText import UniteText # 文本合并
from app.SaveWebTxt import SaveWebTxt


from app.WordCloudDisplay import WordCloudDisplay # 词云图

def CommunicationMain():
    # 创建一个根窗口对象和设置窗口标题
    root = tk.Tk()
    root.title("大通讯")

    # 根窗口
    page = ttk.Frame(root)
    page.pack()

    # 设置默认窗口
    communication_default_window = DefaultWindow(root)

    # 页面标题
    communication_title = ttk.Frame(page)
    communication_title.pack()

    tk.Label(
        communication_title,
        text = "大通讯",
        font = 30,
        pady = 20
    ).pack()

    # 轮播图图片地址
    img_list = [
        "resource/images/crayons-7869424_1280.png",
        "resource/images/woods-7857082_1280.png"
    ]

    communication_image_slideshow = ImageSlideshow(page, img_list)

    communication_category = Category(page)

    # # 文本合并用于词云图
    # unite_text = UniteText(
    #     'resource/TextResources/wordcloud/wordcloud.txt',
    #     'resource/TextResources/article'
    # )
    # unite_text.merge()

    # web_text_saver = SaveWebTxt("https://zhangjiangh03.github.io/", "resource/TextResources/wordcloud/wordcloud.txt")
    # web_text_saver.save_web_txt()

    communication_word_cloud = WordCloudDisplay(page)

    root.mainloop()