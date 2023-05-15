import requests
import re
from bs4 import BeautifulSoup


# web_text_saver = SaveWebTxt("https://gitee.com/zhangjiangh03/temp/raw/master/1.txt", "resource/TextResources/wordcloud/wordcloud.txt")
# web_text_saver.save_web_txt()

class SaveWebTxt:
    def __init__(self, url: str, filename: str):
        self.url = url
        self.filename = filename

    def save_web_txt(self):
        response = requests.get(self.url)
        soup = BeautifulSoup(response.text, "html.parser")
        pattern = re.compile(r'[^\u4e00-\u9fa5]+') # 正则表达式匹配非中文字符
        web_txt_list = [tag.text for tag in soup.find_all()]
        web_txt_list = [pattern.sub(r'', text) for text in web_txt_list] # 利用正则表达式去除英文
        web_txt = "".join(web_txt_list)
        with open(self.filename, "w", encoding="utf-8") as f:
            f.write(web_txt)