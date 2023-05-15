# import sys
# from PyQt5.QtCore import QUrl
# from PyQt5.QtGui import QPixmap
# from PyQt5.QtWidgets import QApplication, QWidget, QHBoxLayout, QVBoxLayout, QLabel, QPushButton
# from PyQt5.QtWebEngineWidgets import QWebEngineView
#
# class HomePage(QWidget):
#
#     def __init__(self):
#         super().__init__()
#
#         # 设置窗口标题和大小
#         self.setWindowTitle('咨询导航')
#         self.resize(600, 500)
#
#         # 创建布局
#         main_layout = QVBoxLayout()
#         top_layout = QHBoxLayout()
#         middle_layout = QHBoxLayout()
#         bottom_layout = QHBoxLayout()
#
#         # 创建页面标题
#         title_label = QLabel('欢迎来到咨询导航', self)
#         title_label.setStyleSheet("font-size: 24px; font-weight: bold; margin-top: 20px; margin-bottom: 20px;")
#         top_layout.addWidget(title_label)
#
#         # 创建网站链接按钮
#         link1_button = QPushButton('中国管理咨询网')
#         link1_button.setStyleSheet("font-size: 16px; padding: 10px 20px;")
#         link1_button.clicked.connect(lambda: self.open_link('http://chnmc.com/'))
#         middle_layout.addWidget(link1_button)
#
#         link2_button = QPushButton('谷歌搜索')
#         link2_button.setStyleSheet("font-size: 16px; padding: 10px 20px;")
#         link2_button.clicked.connect(lambda: self.open_link('https://www.google.com/'))
#         middle_layout.addWidget(link2_button)
#
#         # 创建图片标签
#         img_label = QLabel(self)
#         img_label.setPixmap(QPixmap('icon.jpg').scaledToWidth(200))
#         bottom_layout.addWidget(img_label)
#
#         # 创建浏览器窗口
#         browser = QWebEngineView(self)
#         browser.load(QUrl('https://www.baidu.com/'))
#         main_layout.addWidget(browser)
#
#         # 添加布局
#         main_layout.addLayout(top_layout)
#         main_layout.addLayout(middle_layout)
#         main_layout.addLayout(bottom_layout)
#         self.setLayout(main_layout)
#
#     def open_link(self, url):
#         browser = QWebEngineView(self)
#         browser.load(QUrl(url))
#         browser.show()
#
# if __name__ == '__main__':
#     app = QApplication(sys.argv)
#     home_page = HomePage()
#     home_page.show()
#     sys.exit(app.exec_())


import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QPushButton


class NavigationWindow(QMainWindow):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("导航主页")

        baidu_button = QPushButton("百度", self)
        baidu_button.setGeometry(100, 50, 100, 30)
        baidu_button.clicked.connect(self.open_baidu)

        zhihu_button = QPushButton("知乎", self)
        zhihu_button.setGeometry(100, 100, 100, 30)
        zhihu_button.clicked.connect(self.open_zhihu)

    def open_baidu(self):
        baidu_window = QMainWindow()
        baidu_window.setWindowTitle("百度")
        baidu_window.setGeometry(100, 100, 800, 600)
        baidu_window.show()
        baidu_window.setCentralWidget(QPushButton("百度网页"))

    def open_zhihu(self):
        zhihu_window = QMainWindow()
        zhihu_window.setWindowTitle("知乎")
        zhihu_window.setGeometry(100, 100, 800, 600)
        zhihu_window.show()
        zhihu_window.setCentralWidget(QPushButton("知乎网页"))


if __name__ == '__main__':
    app = QApplication(sys.argv)

    nav_window = NavigationWindow()
    nav_window.setGeometry(100, 100, 300, 200)
    nav_window.show()

    sys.exit(app.exec_())
