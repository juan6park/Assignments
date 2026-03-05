menu = {'Americano' : 0, 'Cafe latte' : 0, 'Cafe Mocha' : 0}
cup = {'Americano' : '1500won', 'Cafe latte' : '2500won', 'Cafe Mocha' : '3000won'}

def print_menu() :
    print("=======Sookmyung Cafe=======")
    print("1. Select coffe menu")
    print("2. Check your order")
    print("3. Pay total price")
    print("4. Get change")
    print()
    
def print_coffeeMenu() :
    print("[Cafe Menu]")
    for i in cup.keys() :
        print(i, "\t", cup[i])
    print()

def select_menu() :
    select = input("Select Menu : ")
    
    while select not in menu :
        print("You selected wrong menu..")
        select = input("Select Menu : ")
        
    cups = int(input("How many cups ? "))
    menu[select] += cups

def check_order() :
    for i in menu.keys() :
        if menu[i] != 0 :
            print(i, "\t", menu[i], "cups")

def calculate_price() :
    global pay
    global total
    
    total = int(menu['Americano'])*1500 + int(menu['Cafe latte'])*2500 + int(menu['Cafe Mocha'])*3000
    print("TotalPrice : " + str(total))
    pay = int(input("Pay money : "))

    while pay < total :
        print("Too small..\n")
        pay = int(input("Pay money : "))
                

def get_charge() :

    left = pay - total
    left_5000 = left // 5000
    left_1000 = (left % 5000) // 1000
    left_500 = (left % 1000) // 500
    left_100 = (left % 500) // 100

    print("Your change is %d won." % left)
    print("=" * 20)
    print("5000 won : " + str(left_5000))
    print("1000 won : " + str(left_1000))
    print("500 won : " + str(left_500))
    print("100 won : " + str(left_100))

    print("\nThank you for using our machine")

while True :
    print_menu()

    choose = int(input("choose : "))

    if choose == 1 :
        print()
        print_coffeeMenu()
        
        select_menu()

    elif choose == 2 :
        print()
        check_order()

    elif choose == 3 :
        print()
        calculate_price()

    elif choose == 4 :
        print()
        get_charge()
        break

    else :
        print("invalid choice")




























    
        
    
    
