import easygui

easygui.msgbox("Welcome to buy lunch ticket!\n\n(Lunch : 11:00 - 15:00)")

select = easygui.buttonbox ("Choose lunch menu to buy",
                             choices = ['Korean dish','Western dish','Chinese dish','Japanese dish','Exit'])

price = 0
K= 0
W = 0
C = 0
J = 0

while True :
    
    if select == "Korean dish" :
        K += int(easygui.enterbox("%s is 3500 won.\n\nHow many tickets do you want to buy?" % select))

    elif select == "Western dish" :
        W += int(easygui.enterbox("%s is 4000 won.\n\nHow many tickets do you want to buy?" % select))

    elif select == "Chinese dish" :
        C += int(easygui.enterbox("%s is 3000 won.\n\nHow many tickets do you want to buy?" % select))

    elif select == "Japanese dish" :
        J += int(easygui.enterbox("%s is 4500 won.\n\nHow many tickets do you want to buy?" % select))

    else :
        break

    select = easygui.buttonbox ("Choose lunch menu to buy",
                             choices = ['Korean dish','Western dish','Chinese dish','Japanese dish','Exit'])



price = (K * 3500) + (W * 4000) + (C * 3000) + (J * 4500)

easygui.msgbox("Total amount to pay : %d\nThanks for using!" %price)

