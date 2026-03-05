import turtle
import easygui

turtle.setup(width = 550 , height = 400)
t = turtle.Pen()

def start() :
    t.up()
    t.left(180)
    t.forward(230)
    t.left(180)
    t.down()

def triangle() :
    t.forward(30)
    t.left(120)
    t.forward(30)
    t.left(120)
    t.forward(30)
    t.left(120)
    t.up()
    t.forward(30)
    t.down()
    

select = easygui.buttonbox("Select shape" , choices = ["circle" , "triangle"])

if select == "circle" :
    num = int(easygui.enterbox("Enter number of circle to draw"))

    num1 = num // 2
    num2 = num % 2

    start()
    
    for i in range(num1) :
        t.circle(20)
        t.up()
        t.forward(40)
        t.down()
        t.circle(20)
        t.up()
        t.forward(60)
        t.down()

    if num2 == 1 :
        t.circle(20)

else :
    num = int(easygui.enterbox("Enter number of triangle to draw"))

    start()
    triangle()
    t.up()
    t.forward(30)
    t.down()
    
    num = num - 1
    num1 = num // 2
    num2 = num % 2

    for i in range(num1):
        triangle()
        triangle()
        t.up()
        t.forward(30)
        t.down()

    if num2 == 1:
        triangle()
