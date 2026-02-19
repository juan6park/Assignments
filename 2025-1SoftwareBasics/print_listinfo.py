number = []

while True :
    print("Enter numbers. (To finish press 'Enter' key)")
    n = input()
    if len(n) == 0 :
        break
    number.append(float(n))

number.sort()
number_len = len(number)
number_center = int(number_len / 2)

if number_len % 2 == 0 :
    center = (number[number_center-1] + number[number_center])/2
else :
    center = number[number_center]

total = 0
for i in number :
    total += int(i)

avg = total/number_len

print("\nYou entered")
print(number)
print("sum     : %.2f" % total)
print("median  : %.2f" % center)
print("average : %.2f" % avg)

    
