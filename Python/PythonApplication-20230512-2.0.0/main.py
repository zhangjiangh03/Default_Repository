#coding=utf-8
import threading
import tkinter as tk
import time
from tkinter import *
import math
import comunication 
from comunication import ComunicationMain

class start:

#变量区
    y_2=0
    signal=0 #信号
    #校徽
    first_image="html/imgs/A.png"
    #左右文
    left_text="用心记录生活\n还原美好时刻"
    right_text="校训\n\n立德树人\n自强奋进"
    #背景图
    bg_image="html/imgs/A.png"
    #初始化循环图
    until_1="html/imgs/A.png"
    until_2="html/imgs/A.png"
    until_3="html/imgs/A.png"
    #三图文
    left_image_file="html/imgs/A.png"
    left_text_file="  减肥解决方法见附件接风机交电话费就东方基金分 解放分 "

    center_image_file="html/imgs/A.png"
    center_text_file="  你只能的屙屎出题什么呢为啥 的 附加费和比较人防"

    right_image_file="html/imgs/A.png"
    right_text_file="  我们属于什么区域人的呢是吧我们有什么区面对塔恩"
    #循环图
    list1=["html/imgs/A.png"]
    list2=["html/imgs/A.png"]
    list3=["html/imgs/A.png"]
    #说明文
    left_speak="凯里学院男女比例图，\n其中女性居多，\n此图仅供参考！"
    center_speak="那是属于理科生的浪漫区"
    center_speak_text1="“突然梦见，穿越去了雅典，\n 我变成了白胡子的苏格拉底，\n而你是我宁死也要坚守的法律”"
    center_speak_text2="“用你的名字和我的姓氏\n          成就的这个故事，\n       从此以后无忧无愁，\n\t 故事就算平淡\n    但当中有你就已经足够!”"
    right_speak="那属于文科生的浪漫区"
#函数区
    def __init__(self):
     self.root=tk.Tk()
     self.root.iconphoto(False,tk.PhotoImage(file="html/imgs/A.png"))
     self.root.title("校园常")
     self.root.geometry("800x600+300+100")
     self.Bg_image()
     self.thread1=threading.Thread(target=self.act_image)#线程一
     self.thread1.start()
     self.thread2=threading.Thread(target=self.Photo_act)#线程二
     self.thread2.start()

     self.thread3=threading.Thread(target=self.thread_delete)#线程三
     self.thread3.start()

     self.thread4=threading.Thread(target=self.canvas_1_R)#线程四
     self.thread4.start()
     self.thread5=threading.Thread(target=self.canvas_2_P)#线程五
     self.thread5.start()
     self.thread6=threading.Thread(target=self.canvas_3_Z)#线程六
     self.thread6.start()
     self.root.mainloop()


    def thread_delete(self):
        pass
    def color4(self):
        if self.button4["fg"]=="black":
            self.button4["fg"]="red"
            self.button5["fg"]="black"
            self.button6["fg"]="black"
            self.button7["fg"]="black"
        pass#函数入口1
    def color5(self):
        if self.button5["fg"]=="black":
            self.button4["fg"]="black"
            self.button5["fg"]="red"
            self.button6["fg"]="black"
            self.button7["fg"]="black"
            self.thread1.join()
            self.thread2.join()
            self.thread3.join()
            self.thread4.join()
            self.thread5.join()
            self.thread6.join()
            self.thread8=threading.Thread(target=ComunicationMain)
            self.thread8.start()
    def color6(self):
        if self.button6["fg"]=="black":
            self.button4["fg"]="black"
            self.button5["fg"]="black"
            self.button6["fg"]="red"
            self.button7["fg"]="black"
        pass#函数入口3
    def color7(self):
        if self.button7["fg"]=="black":
            self.button4["fg"]="black"
            self.button5["fg"]="black"
            self.button6["fg"]="black"
            self.button7["fg"]="red"
        pass#函数入口4
#信号源
    def button1_signal(self,event):
        self.signal=1
        return self.signal
    def button2_signal(self,event):
        self.signal=2
        return self.signal
    def button3_signal(self,event):
        self.signal=3
        return self.signal
    def mouseWheel(self,event):#滑轮事件
        if event.delta > 0 and self.y_2<0 and self.y_2>=-1500:
            self.y_2+=50
            self.canvas.place(y=self.y_2)
        elif event.delta <0 and self.y_2>=-500:
            self.y_2-=50
            self.canvas.place(y=self.y_2)
    def Scale_all(self): #查看图片
        self.root1=tk.Toplevel()
        self.root1.geometry("600x600+700+100")
        self.root1.title("随机图片查看器")
        self.root1.resizable(False,False)
        if self.signal==1:
           image_1=self.photo_1
           self.label_scale=tk.Label(self.root1,image=image_1)
        elif self.signal==2:
           image_1=self.photo_2
           self.label_scale=tk.Label(self.root1,image=image_1)
        elif self.signal==3:
           image_1=self.photo_3
           self.label_scale=tk.Label(self.root1,image=image_1)
        self.label_scale.place(x=0,y=0,width=600,height=600)

        self.root1.mainloop()
    def act_image(self): #动图旋转原理
     while 1:
         x1=430#图左的位置
         y1=200
         w1=150
         h1=150
         x2=670#图中的位置
         y2=180
         w2=200
         h2=200
         x3=950#图右的位置
         y3=200
         w3=150
         h3=150
         for number in range(10):
              x1+=52
              y1+=0
              w1+=0
              h1+=0
              x2-=24
              y2+=2
              w2-=5
              h2-=5
              x3-=28
              y3-=2
              w3+=5
              h3+=5
              self.button1.place(x=x1,y=y1,width=w1,height=h1)
              self.button2.place(x=x2,y=y2,width=w2,height=h2)
              self.button3.place(x=x3,y=y3,width=w3,height=h3)

              time.sleep(0.3)

         x1=430#图左的位置
         y1=200
         w1=150
         h1=150
         x2=670#图中的位置
         y2=180
         w2=200
         h2=200
         x3=950#图右的位置
         y3=200
         w3=150
         h3=150
         for number in range(10):
             x1+=52
             y1+=0
             w1+=0
             h1+=0
             x2-=24
             y2+=2
             w2-=5
             h2-=5
             x3-=28
             y3-=2
             w3+=5
             h3+=5
             self.button1.place(x=x3,y=y3,width=w3,height=h3)
             self.button2.place(x=x1,y=y1,width=w1,height=h1)
             self.button3.place(x=x2,y=y2,width=w2,height=h2)
             time.sleep(0.3)

         x1=430#图左的位置
         y1=200
         w1=150
         h1=150
         x2=670#图中的位置
         y2=180
         w2=200
         h2=200
         x3=950#图右的位置
         y3=200
         w3=150
         h3=150
         for number in range(10):
             x1+=52
             y1+=0
             w1+=0
             h1+=0
             x2-=24
             y2+=2
             w2-=5
             h2-=5
             x3-=28
             y3-=2
             w3+=5
             h3+=5
             self.button1.place(x=x1,y=y1,width=w1,height=h1)
             self.button2.place(x=x2,y=y1,width=w2,height=h2)
             self.button3.place(x=x3,y=y2,width=w3,height=h3)
             time.sleep(0.3)





    def Photo_act(self):#多图循环
      while 1:
        for record in range(5):
          self.photo_1=tk.PhotoImage(file=self.list1[record])
          self.photo_2=tk.PhotoImage(file=self.list2[record])
          self.photo_3=tk.PhotoImage(file=self.list3[record])
          self.button1["image"]=self.photo_1
          self.button2["image"]=self.photo_2
          self.button3["image"]=self.photo_3
          time.sleep(5)

    def canvas_1_R(self):
       while 1:
        y=0
        for x in range(10):

           y+=36
           if y<=144:
            self.canvas_1.create_arc(50,0,350,300,start=0,extent=y,outline="black",fill="red")
            time.sleep(1)
           elif y>144:
            self.canvas_1.create_arc(50,0,350,300,start=144,extent=y-144,outline="black",fill="blue")
            time.sleep(1)
        self.canvas_1.create_text(200,70,text="男生比例约40%",fill="white",font=("黑体",15))
        self.canvas_1.create_text(200,220,text="女生比例约60%",fill="orange",font=("黑体",15))
        time.sleep(5)
        self.canvas_1.delete("all")


        pass
    def canvas_2_P(self):
        self.canvas_2.create_text(200,60,text=self.center_speak_text1,fill="white",font=("华文行楷",20))
        self.canvas_2.create_text(200,200,text=self.center_speak_text2,fill="white",font=("华文行楷",20))


    def canvas_3_Z(self):
       while 1:
         X1=0
         X2=0
         X3=0
         X4=0
         self.canvas_3.delete("all")
         self.canvas_3.create_line(200,0,200,290,fill="black")
         self.canvas_3.create_polygon(190,10,200,0,210,10,fill="black")
         self.canvas_3.create_line(0,140,390,140,fill="black")
         self.canvas_3.create_polygon(390,130,400,140,390,150,fill="black")
         self.canvas_3.create_text(190,150,text="0",font=("隶书",15),fill="black")
         self.canvas_3.create_text(190,10,text="140",fill="black",font=("黑体",10))
         self.canvas_3.create_text(380,150,text="200",fill="black",font=("黑体",10))
         for x in range(10):
           X1+=18
           self.canvas_3.create_arc(0,0,200,300,start=0,extent=X1,outline="red",fill="red")
           time.sleep(0.3)
         for x in range(10):
           X2+=9
           self.canvas_3.create_arc(0,0,400,300,start=180,extent=X2,outline="red",fill="red")
           time.sleep(0.3)
         for x in range(10):
           X3+=9
           self.canvas_3.create_arc(0,0,400,300,start=270,extent=X3,outline="red",fill="red")
           time.sleep(0.3)
         for x in range(10):
           X4+=18
           self.canvas_3.create_arc(200,0,400,300,start=0,extent=X4,outline="red",fill="red")
           time.sleep(0.3)
         self.canvas_3.create_line(200,0,200,290,fill="black")
         self.canvas_3.create_polygon(190,10,200,0,210,10,fill="black")
         self.canvas_3.create_line(0,140,390,140,fill="black")
         self.canvas_3.create_polygon(390,130,400,140,390,150,fill="black")
         self.canvas_3.create_text(190,150,text="0",font=("隶书",15),fill="black")
         self.canvas_3.create_text(190,10,text="140",fill="black",font=("黑体",10))
         self.canvas_3.create_text(380,150,text="200",fill="black",font=("黑体",10))
         time.sleep(5)
         self.canvas_3.delete("all")



    def Bg_image(self):

#操作区
     self.canvas=tk.Canvas(self.root,bg="lightblue")#全画布
     self.frame=tk.Frame(self.canvas,bg="lightblue")#面板
     self.canvas.create_window((0,0),window=self.frame,anchor="nw") # 要用create_window才能跟随画布
     self.photo_first=tk.PhotoImage(file=self.first_image)#校徽图
     self.label_first=tk.Label(self.frame,image=self.photo_first)#校徽
     self.message1=tk.Label(self.frame,text=self.left_text,bg="ghostwhite",fg="blue",font=("华文彩云",20))#左信息
     self.message2=tk.Message(self.frame,text=self.right_text,bg="ghostwhite",font=("宋体",30))#右信息
     self.photo_bg=tk.PhotoImage(file=self.bg_image)#背景图
     self.label_bg=tk.Label(self.frame,image=self.photo_bg,width=1100,height=398)#背景

     self.photo_1=tk.PhotoImage(file=self.until_1)#图
     self.button1=tk.Button(self.frame,image=self.photo_1,width=150,height=150,command=self.Scale_all)#图1
     self.button1.bind("<Button-1>",self.button1_signal)
     self.photo_2=tk.PhotoImage(file=self.until_2)#图
     self.button2=tk.Button(self.frame,image=self.photo_2,width=200,height=200,command=self.Scale_all)#图2
     self.button2.bind("<Button-1>",self.button2_signal)
     self.photo_3=tk.PhotoImage(file=self.until_3)#图
     self.button3=tk.Button(self.frame,image=self.photo_3,width=150,height=150,command=self.Scale_all)#图3
     self.button3.bind("<Button-1>",self.button3_signal)

     self.label1=tk.Label(self.frame,text="首页",bg="orange",fg="red",font=("华政楷体",40))
     self.button4=tk.Button(self.frame,text="专业",fg="black",font=("华政楷体",25),command=self.color4)
     self.button5=tk.Button(self.frame,text="新闻",fg="black",font=("华政楷体",25),command=self.color5)
     self.button6=tk.Button(self.frame,text="美食",fg="black",font=("华政楷体",25),command=self.color6)
     self.button7=tk.Button(self.frame,text="关于",fg="black",font=("华政楷体",25),command=self.color7)

     self.photo2=tk.PhotoImage(file=self.left_image_file)#图
     self.label2=tk.Button(self.frame,image=self.photo2,width=400,height=200)#文图
     self.message3=tk.Text(self.frame,bg="white",font=("华政楷体",15),fg="black")#文
     self.message3.insert("1.2",self.left_text_file)#文容
     self.message3.config(state=tk.DISABLED)

     self.photo3=tk.PhotoImage(file=self.center_image_file)#图
     self.label3=tk.Button(self.frame,image=self.photo3,width=400,height=200)#文图
     self.message4=tk.Text(self.frame,bg="white",font=("华政楷体",15),fg="black")#文
     self.message4.insert("1.2",self.center_text_file)#文容
     self.message4.config(state=tk.DISABLED)

     self.photo4=tk.PhotoImage(file=self.right_image_file)#图
     self.label4=tk.Button(self.frame,image=self.photo4,width=400,height=200)#文图
     self.message5=tk.Text(self.frame,bg="white",font=("华政楷体",15),fg="black")#文
     self.message5.insert("1.2",self.right_text_file)#文容
     self.message5.config(state=tk.DISABLED)

     self.canvas1=tk.Canvas(self.frame,bg="gray",width=1600,height=200)#画布2
     self.canvas_1=tk.Canvas(self.frame,bg="lightblue",width=400,height=300,)#饼图画布
     self.canvas_1.config(highlightthickness=0)
     self.canvas_2=tk.Canvas(self.frame,bg="skyblue",width=400,height=300)#文字画布
     self.canvas_2.config(highlightthickness=0)
     self.canvas_3=tk.Canvas(self.frame,bg="lightblue",width=400,height=300)#坐标画布
     self.canvas_3.config(highlightthickness=0)
     self.label_left=tk.Label(self.frame,text=self.left_speak,bg="lightblue",fg="gray",font=("楷书",15,"bold"))
     self.label_center=tk.Label(self.frame,text=self.center_speak,bg="lightblue",fg="gray",font=("楷书",15,"bold"))
     self.label_right=tk.Label(self.frame,text=self.right_speak,bg="lightblue",fg="gray",font=("楷书",15,"bold"))

#布局区

     self.canvas.place(x=0,y=0,width=1600,height=1500)#画布布局
     self.frame.place(x=0,y=0,width=1600,height=1500)
     self.root.bind("<MouseWheel>",self.mouseWheel)#滑轮绑定窗口

     self.label_first.place(x=0,y=0,width=250,height=175)
     self.message1.place(x=0,y=175,width=250,height=225)#消息
     self.message2.place(x=1300,y=0,width=250,height=400)

     self.label_bg.place(x=220,y=0)#背景
     self.button1.place(x=430,y=200)#图
     self.button2.place(x=670,y=180)
     self.button3.place(x=950,y=200)
     self.label1.place(x=0,y=400,width=332,height=50)#工具栏
     self.button4.place(x=333,y=400,width=300,height=50)
     self.button5.place(x=633,y=400,width=300,height=50)
     self.button6.place(x=932,y=400,width=300,height=50)
     self.button7.place(x=1231,y=400,width=305,height=50)
     self.label2.place(x=50,y=460)#图文
     self.message3.place(x=50,y=665,width=405,height=150)
     self.label3.place(x=550,y=460)
     self.message4.place(x=550,y=665,width=405,height=150)
     self.label4.place(x=1050,y=460)
     self.message5.place(x=1050,y=665,width=405,height=150)
     self.canvas1.pack(side="bottom",fill="y")
     self.canvas_1.place(x=50,y=850)
     self.canvas_2.place(x=550,y=850)
     self.canvas_3.place(x=1050,y=850)

     self.label_left.place(x=50,y=1160,width=400,height=100)
     self.label_center.place(x=550,y=1160,width=400,height=100)
     self.label_right.place(x=1050,y=1160,width=400,height=100)










show=start()
