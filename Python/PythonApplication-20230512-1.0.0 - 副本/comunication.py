# 导入 tkinter 库 ttkbootstrap 库
import tkinter as tk
import ttkbootstrap as ttk
import tkinter.font as font

from PIL import ImageTk, Image
from wordcloud import WordCloud
import jieba
from bs4 import BeautifulSoup

# 导入 Qt 里需要用到的类
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout
from PyQt5.QtWebEngineWidgets import QWebEngineView
from PyQt5.QtCore import QUrl, Qt

# 导入 sys 库
import sys

class QTWindow:

    def __init__(self, html_path):
        # 创建一个应用程序对象
        self.app = QApplication(sys.argv)
        # 初始化 QWidgetD 对象（将在 QT 窗口中显示的窗体）
        self.QWidgetD = QWidget()
        # 初始化 LayoutD 对象
        self.LayoutD = QVBoxLayout()
        # 初始化 web_browser 对象（用于显示嵌入的网页）
        self.web_browser = QWebEngineView()
        self.html_path = html_path

        # 获取屏幕宽度和高度
        screen_width = QApplication.desktop().screenGeometry().width()
        screen_height = QApplication.desktop().screenGeometry().height()

        # 设置窗口大小
        width = int(screen_width * 0.8)
        height = int(screen_height * 0.8)
        # 设置窗体大小，不允许改变窗口大小
        self.QWidgetD.resize(width, height)

        # 设置窗体大小固定
        # self.QWidgetD.setFixedSize(width, height)

        # 禁止用户右键
        self.web_browser.setContextMenuPolicy(Qt.NoContextMenu)

    def creat_QT_window(self, path, title):
        if path.startswith('http'):
            # 如果是网页链接，直接加载链接
            self.web_browser.load(QUrl(path))
        else:
            # 如果是本地文件，文件路径转换成 URL 形式的 QUrl 对象
            url = QUrl.fromLocalFile(path)
            # 加载网页
            self.web_browser.load(url)

        # 将网页浏览器对象添加到 LayoutD 对象的布局中
        self.LayoutD.addWidget(self.web_browser)
        self.QWidgetD.setWindowTitle(title)
        # 将窗体的布局设置为 LayoutD
        self.QWidgetD.setLayout(self.LayoutD)
        # 显示该窗体
        self.QWidgetD.show()

    def Run(self):
        # 创建 tkinter 应用程序对象
        root = tk.Tk()
        root.title("活动信息")
        # 获取screen_width和高度
        screen_width = root.winfo_screenwidth()
        screen_height = root.winfo_screenheight()
        # 设置窗口大小
        width = int(screen_width * 0.5)
        height = int(screen_height * 0.5)
        # 设置窗口大小
        root.geometry("{}x{}".format(width, height))
        # 设置窗口大小的最大值和最小值
        root.maxsize(screen_width, screen_height)
        root.minsize(int(screen_width * 0.85), int(screen_height * 0.8))
        # 不允许改变窗口大小
        # root.resizable(False, False)
        label_width_set = (int)(screen_width * 0.02)

        category = ttk.Frame(root)
        category.pack()

        title_font = font.Font(family="res/Tonsilla.ttf", size = 30)
        tk.Label(
            category,
            text = "活动信息",
            font = title_font
        ).pack(side = tk.TOP, pady = (20, 0))

        label_font = font.Font(family="res/Tonsilla.ttf", size = 15)
        Info_LabelFrame = ttk.Labelframe(category, text = "Info", bootstyle = "info")
        tk.Label(
            Info_LabelFrame,
            text = "凯院资讯\n",
            font = label_font,
            width = label_width_set
        ).pack(pady = (10, 10))
        ttk.Button(
            Info_LabelFrame,
            text = "查看",
            bootstyle = "primary",
            command = lambda: self.creat_QT_window('/html/info.html', "Info")
        ).pack(padx = 10, pady = (0, 10))

        Club_LabelFrame = ttk.Labelframe(category, text = "Club", bootstyle = "info")
        tk.Label(
            Club_LabelFrame,
            text = "社团组织\n",
            font = label_font,
            width = label_width_set
        ).pack(pady = (10, 10))
        ttk.Button(
            Club_LabelFrame,
            text = "查看",
            bootstyle = "primary",
            command = lambda: self.creat_QT_window('/html/club.html', "Club")
        ).pack(padx = 10, pady = (0, 10))

        FAQs_LabelFrame = ttk.Labelframe(category, text = "FAQs", bootstyle = "info")
        tk.Label(
            FAQs_LabelFrame,
            text = "凯院问答\n",
            font = label_font,
            width = label_width_set
        ).pack(pady = (10, 10))
        ttk.Button(
            FAQs_LabelFrame,
            text = "查看",
            bootstyle = "primary",
            command = lambda: self.creat_QT_window('/html/faqs.html', "FAQs")
        ).pack(padx = 10, pady = (0, 10))

        Info_LabelFrame.pack(side = tk.LEFT, anchor = tk.NW, padx = 20, pady = 10)
        Club_LabelFrame.pack(side = tk.LEFT, anchor = tk.N, padx = 20, pady = 10)
        FAQs_LabelFrame.pack(side = tk.RIGHT, anchor = tk.NE, padx = 20, pady = 10)

        partition = ttk.Frame(root)
        partition.pack()

        # 分割线与文字组件
        separator = ttk.Separator(partition, bootstyle = "info")
        separator.pack(padx = 20, pady = 10)

        # partition_font = font.Font(family = "res/Tonsilla.ttf", size = 15)
        # tk.Label(
        #     partition,
        #     text = "热点词云图\n",
        #     font = partition_font
        # ).pack(side = tk.TOP, pady = (20, 0))

        def show_image():
            # 读取本地图片并进行缩放
            image = Image.open('res/imgs/1.png')
            img_width = int(0.6 * screen_width)
            img_height = int(0.5 * screen_height)
            image = image.resize((img_width, img_height))
            photo = ImageTk.PhotoImage(image)

            label = tk.Label(root, image = photo)
            label.image = photo
            label.pack()


        # 调用函数显示图片
        show_image()

        # 进入主循环，等待用户操作
        root.mainloop()

        # 关闭主窗口结束程序
        root.protocol(self.closing)

        def closing(self):
            self.QWidgetD.close()
            sys.exit()

        # 在所有窗口都关闭后退出程序
        sys.exit(self.app.exec_())

def ComunicationMain():
    wb = QTWindow('/html/comunication_index.html')
    wb.Run()



if __name__ == '__main__':
    ComunicationMain()



########################################################################################################
    # def create_tk_window(self):
    #     # 创建新的tk窗口
    #     tk_win = tk.Toplevel()
    #     tk_win.title("New Tk Window")
    #
    #     # 设置窗口大小和位置
    #     screen_width = tk_win.winfo_screenwidth()
    #     screen_height = tk_win.winfo_screenheight()
    #     width = int(screen_width * 0.5)
    #     height = int(screen_height * 0.5)
    #     x = int(screen_width * 0.25)
    #     y = int(screen_height * 0.25)
    #     tk_win.geometry("{}x{}+{}+{}".format(width, height, x, y))
    #
    #     # 设置窗口不能改变大小
    #     # tk_win.resizable(False, False)
    #
    #     categorys = ttk.Frame(tk_win)
    #     categorys.pack()
    #
    #     title_fonts = font.Font(family="res/Tonsilla.ttf", size=30)
    #     tk.Label(
    #         categorys,
    #         text="通讯社",
    #         font=title_fonts
    #     ).pack(side=tk.TOP, pady=(20, 0))
    #     tk.Button(categorys, text="hell", command=lambda: self.creat_QT_window('/html/info.html')).pack()
    #
    #     # 关闭窗口的回调函数
    #     def on_close():
    #         tk_win.destroy()
    #
    #     # 设置关闭按钮回调函数
    #     tk_win.protocol("WM_DELETE_WINDOW", on_close)

        # def generate_wordcloud():
        #     # 读取本地的 HTML 文件
        #     with open('html/info.html', 'r', encoding='utf-8') as f:
        #         text = f.read()
        #
        #     # 使用 BeautifulSoup 解析 HTML 文本
        #     soup = BeautifulSoup(text, 'html.parser')
        #
        #     # 获取所有的 p 标签和 h2 标签
        #     td_tags = soup.find_all("td", attrs={"class": "hot"})
        #
        #     # 将标签里的文本信息合并为一个字符串
        #     text = ''
        #     for tag in td_tags:
        #         text += tag.text
        #
        #     # 使用 jieba 分词
        #     words = jieba.cut(text)
        #
        #     # 将分词后的结果转换为字符串形式
        #     word_str = ' '.join(words)
        #
        #     # 计算词云图的宽度和高度
        #     img_width = int(0.6 * screen_width)
        #     img_height = int(0.4 * screen_height)
        #
        #     # 创建 WordCloud 对象
        #     wc = WordCloud(
        #         font_path='res/Tonsilla.ttf',
        #         background_color="white",
        #         max_words=2000,
        #         width = img_width,
        #         height =  img_height,
        #         margin = 10,
        #         collocations = False, scale = 1
        #     )
        #
        #     # 生成词云图
        #     wc.generate(word_str)
        #
        #     # 将词云图转换为图片对象
        #     image = wc.to_image()
        #
        #     # 使用 PIL 库将图片对象转换为 PhotoImage 对象
        #     photo = ImageTk.PhotoImage(image)
        #
        #     # 创建一个 Label 组件，用于显示词云图
        #     label = tk.Label(root, image = photo)
        #     label.image = photo
        #     label.pack()
        #
        # generate_wordcloud()








