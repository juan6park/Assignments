import turtle

t = turtle.Pen()
turtle.setup(width = 600, height = 600)

t.left(90)

color = ["blue" , "red" , "yellow" , "green"]
for x in color :
    t.color(x)
    t.pencolor(x)
    t.begin_fill()
    t.forward(100)
    t.left(90)
    t.circle(100,90)
    t.left(90)
    t.forward(100)
    t.right(180)
    t.end_fill()

t.pencolor("white")
t.width(5)
t.circle(50)

t.right(90)
t.up()
t.forward(100)
t.left(90)
t.down()
t.circle(50)
