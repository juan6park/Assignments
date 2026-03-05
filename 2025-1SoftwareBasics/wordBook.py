book = []

while True :

    print("********************************************************")
    print("*                 Sookmyung Dictionary                 *")
    print("********************************************************")
    print("    1. Save words")
    print("    2. Delete words")
    print("    3. Print all words")
    print("    4. Exit")
    print("========================================================")

    select = int(input("Select >> "))

    if select == 1 :
        print("Enter word to save. Press 'Enter' to finish\n")
        
        while True :
            word = input("Word : ")
            
            if word in book :
                print("Already Exist")
            elif len(word) == 0 :
                break
            else :
                book.append(word)
                  
    elif select == 2 :
        print("Enter word to deleted\n")

        word = input("Word : ")

        while word not in book :
            print("No Exist")
            word = input("Word : ")

        book.remove(word)
        print("Deletion complete")
             
    elif select == 3 :
        for i in book:
            print(i)

    elif select == 4 :
        break
    
    else :
        print("You entered wrong menu")

