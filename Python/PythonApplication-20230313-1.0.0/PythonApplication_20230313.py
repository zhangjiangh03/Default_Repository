import turtle as t


t.pen()
t.speed(0)
t.pensize(2)
corlors=['red','brown',
       'blue','yellow',
       'green','pink',
       'black','purple']
for x in range(360):
    t.fd(x/2)
    t.pencolor(corlors[x%8])
    t.left(45) # 45, 90
t.done()
