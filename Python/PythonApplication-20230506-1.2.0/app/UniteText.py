import os

# 通过 with 语句打开目标文件，指定了编码和写入模式；
# 使用 os.walk() 函数遍历源目录下的所有文件和子目录，并对每个文件进行处理。
# 在遍历的过程中，如果文件名以 .txt 结尾，则打开该文件，并将其内容写入目标文件中。

class UniteText:
    def __init__(self, target_file_path, source_dir_path):
        self.target_file_path = target_file_path
        self.source_dir_path = source_dir_path

    def merge(self):
        # 目标文件写入
        with open(self.target_file_path, 'w', encoding='utf-8') as f:

            # 遍历源目录下的所有文件和子目录，root 的值会随着遍历不断更新，指示当前正在处理哪个目录下面的所有文件和子目录
            for root, dirs, files in os.walk(self.source_dir_path):
                for file in files:
                    if file.endswith('.txt'):
                        with open(os.path.join(root, file), 'r', encoding='utf-8') as file_txt:
                            f.write(file_txt.read())