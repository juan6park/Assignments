import random
import easygui

name = easygui.enterbox("What is your name?")
computer = random.randint(1,21)
mine = random.randint(1,13)

easygui.msgbox("Ok, " + name + "! \nLet's play 21 game ")

select = easygui.buttonbox("your first card is %d \nDo you want more?" % (mine)
                  , choices = ["Yes" , "No"])

if select == "Yes" :
    mine_second = random.randint(1,13)
    easygui.msgbox("Your second card is %d \nCheck yout result" % (mine_second))

    result = mine + mine_second

    if result > 21:
        easygui.msgbox("Your final result is %d. It is over 21, so you lose. \nComputer's card was %d"
                       % (result,computer))

    elif result > computer :
        easygui.msgbox("Your final result is %d \nComputer's card was %d \nYou win!"
                       % (result,computer))
    elif result == computer :
        easygui.msgbox("Your final result is %d \nComputer's card was %d \nIt's a tie!"
                       % (result,computer))
        
    else :
        easygui.msgbox("Your final result is %d \nComputer's card was %d \nYou lose!"
                       % (result,computer))

else :
    easygui.msgbox("Ok, check your result")
    
    if mine > computer:
        easygui.msgbox("Your final result is %d \nComputer's card was %d \nYou win!"
                       % (mine,computer))
    elif mine == computer :
        easygui.msgbox("Your final result is %d \nComputer's card was %d \nIt's a tie!"
                       % (mine,computer))
    else :
        easygui.msgbox("Your final result is %d \nComputer's card was %d \nYou lose!"
                       % (mine,computer))


