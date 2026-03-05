import math

x1 = int(input("Enter x1 : "))
y1 = int(input("Enter y1 : "))
x2 = int(input("Enter x2 : "))
y2 = int(input("Enter y2 : "))


x_distance = math.pow(x1 - x2 ,2)
y_distance = math.pow(y1 - y2 ,2)
distance = math.sqrt(x_distance + y_distance)

print("Distance between two points : ", distance)
