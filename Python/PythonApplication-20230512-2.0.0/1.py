import tkinter as tk
from threading import Thread
from comunication import ComunicationMain
import ttkbootstrap as ttk

root = tk.Tk()

button = ttk.Button(root, text="Click Me", command=ComunicationMain())
button.pack()

root.mainloop()
