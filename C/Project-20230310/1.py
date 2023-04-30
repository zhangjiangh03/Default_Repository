#
import turtle as t #替换
p = t.pen()
p.speed(0)
p.pensize(2)
corlors = ['red', 'brown', \
'blue', 'yellow', \
'green', 'pink'\
'black', 'purple']
for x in range(360) :
    p.fd(x / 2)
    p.pencolor(corlors[x % 8])
    p.left(45) # 45, 90
    t.done()
