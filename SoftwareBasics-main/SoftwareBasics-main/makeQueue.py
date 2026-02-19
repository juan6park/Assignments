queue = []

while True :
    print("*" * 10 , " Queue Program ", "*" * 10)
    print("1. Insert item to Queue")
    print("2. Delete item from Queue")
    print("3. Print Queue")
    print("4. Exit\n")

    menu = int(input("Enter menu : "))

    if menu == 1 :
        word = input("# Enter item to insert : ")
        queue.append(word)
        print("# '" + word + "' is inserted")
        print("# State of Queue : ", end = ' '); print(queue)
 
    elif menu == 2 :
        if len(queue) == 0 :
            print("# Nothing to delete in queue.")
            
        else :
            print("# First item '" + queue[0] + "' was removed.")
            del queue[0]
            print("# State of Queue : ", end = ' '); print(queue)

    elif menu == 3 :
        if len(queue) == 0 :
            print("# Nothing in queue")
            
        else :
            print("# State of Queue : ", end = ' '); print(queue)

    elif menu == 4 :
        break

    print()
