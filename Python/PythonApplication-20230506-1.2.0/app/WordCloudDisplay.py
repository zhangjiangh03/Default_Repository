import tkinter as tk
import jieba
from PIL import Image, ImageTk
from wordcloud import WordCloud
from pathlib import Path

class WordCloudDisplay:
    def __init__(self, root):
        self.root = root
        self.word_cloud_display_widgets()

    def word_cloud_display_widgets(self):
        # 读取文件内容
        with open('resource/TextResources/wordcloud/wordcloud.txt', 'r', encoding = 'utf-8') as f:
            word_cloud_text = f.read()

        # 判断读取的文本是否为空
        if not word_cloud_text:
            word_cloud_text = '没有内容哦'

        # 分词
        word_segmentation = jieba.cut(word_cloud_text)

        word_cloud_width = self.root.winfo_screenwidth()
        word_cloud_height = self.root.winfo_screenheight()

        # 生成词云图
        word_cloud = WordCloud(
            width = word_cloud_width - 520,
            height = word_cloud_height - 700,
            background_color = "white",
            font_path = 'resource/Tonsilla.ttf',
            max_words = 200,
            max_font_size = 150,
        ).generate(' '.join(word_segmentation))

        # 保存词云图
        word_cloud.to_file("resource/images/word_cloud.png")

        # 显示词云图
        word_cloud_image = Image.open("resource/images/word_cloud.png")
        word_cloud_image_photo = ImageTk.PhotoImage(word_cloud_image)
        word_cloud_image_label = tk.Label(self.root, image = word_cloud_image_photo)
        word_cloud_image_label.image = word_cloud_image_photo
        word_cloud_image_label.pack()