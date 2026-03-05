select = 0

while True:

    print("=====Checking Year Program=====")
    print("     1. Check Leap Year")
    print("     2. Check total day")
    print("     3. Exit")
    print("===============================")

    select = int(input("Select : "))

    if (select != 1) and (select != 2) and (select != 3) :
            print("잘못된 메뉴 선택입니다. 다시 시도해주세요.\n")
            
    elif select == 1 :
        year = int(input("Enter year to check : "))
        check1 = year % 4
        check2 = year % 100
        check3 = year % 400
        
        if ((check1 == 0) and (check2 != 0)) or (check3 == 0):
            print("%d is leap year.\n" %year)
            
        else :
            print("%d is not leap year.\n" %year)

    elif select == 2:
        print("Enter month and date")
        month = int(input("Month : "))
        date = int(input("Date : "))
        num = date

        calender = [0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30]
        count = 0

        for x in calender:
            num += x
            count += 1
            
            if count == month:
                break

        print("2028.%d.%d is %dth day in 2028\n" %(month,date,num))
        
    elif select == 3:
        break

print("Thanks for using program.")


