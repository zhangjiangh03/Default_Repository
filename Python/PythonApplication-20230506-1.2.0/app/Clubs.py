import tkinter as tk
from app.DefaultWindow import DefaultWindow

class Club:

    def __init__(self, title):
        self.root = tk.Tk()
        self.root.title(title)
        app = DefaultWindow(self.root)

    def close(self):
        self.root.destroy()

    def create_new(self, title):
        self.close()
        self.__init__(title)