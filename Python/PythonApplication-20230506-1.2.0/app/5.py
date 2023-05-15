from PyQt5.QtWidgets import *
from PyQt5.QtWebEngineWidgets import QWebEngineView
from PyQt5.QtCore import QUrl
import threading

class FAQs(QDialog):

    def __init__(self, title):
        super().__init__()

        # 设置对话框大小和位置
        self.setGeometry(10, 10, 840, 680)

        # 创建 WebView
        self.webView = QWebEngineView(self)
        self.webView.load(QUrl("https://www.baidu.com/"))
        self.setFixedSize(800, 600)
        layout = QVBoxLayout()
        layout.addWidget(self.webView)
        self.setLayout(layout)

        # 设置对话框标题
        self.setWindowTitle(title)

def showFAQs():
    # 创建一个新窗口
    faqs_window = QMainWindow()

    # 创建一个FAQs对象，并将其加入到新窗口中
    faqs = FAQs("常见问题解答")
    faqs.show()
    faqs_window.setCentralWidget(faqs)

    # 显示新窗口
    faqs_window.show()

# 在单独的线程中运行PyQt5事件循环
def run():
    app = QApplication([])
    app.exec_()

# 创建一个Tkinter窗口和一个'FAQs'按钮
import tkinter as tk
root = tk.Tk()
root.geometry("300x200")
faq_btn = tk.Button(root, text='FAQs', command=showFAQs)
faq_btn.pack(pady=20)

# 在单独的线程中运行PyQt5事件循环
t = threading.Thread(target=run)
t.start()

# 启动Tkinter主循环，并定期更新PyQt5事件循环状态
while True:
    root.update()
    QApplication.processEvents()
