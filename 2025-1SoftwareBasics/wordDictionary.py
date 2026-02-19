dic = {}
score = []

while True :
    print("********************************************")
    print("*         Sookmyung Dictionary             *")
    print("********************************************")
    print("          1. Save words")
    print("          2. Delete words")
    print("          3. Print all words")
    print("          4. Search word")
    print("          5. Word Test")
    print("          6. Show Test score")
    print("          7. Exit")
    print("============================================")

    select = int(input("Select >> "))

    if select == 1 :
        print("Enter word to save. Press 'Enter' to finish\n")

        while True :
                word = input("Word : ")
                if len(word) == 0:
                    break
                
                elif word in dic :
                    print("Already Exist")
                    print("\n")

                else :
                    mean = input("Mean : ")
                    print("\n")

                dic[word] = mean
            
    if select == 2 :
        print("Enter word to deleted\n")

        while True :
            word = input("Word : ")
            
            if word in dic.keys() :
                del dic[word]
                print("Deletion is completed")
                break
                
            else :
                print("No such words")

    if select == 3 :
        print()
        for x , y in dic.items() :
            print()
            print(x, "\t", y)

    if select == 4 :
        print("Enter word to search\n")

        word = input("word : ")
        print("\n", word, "\t", dic[word])

    if select == 5 :
        num = 0
        if len(dic) == 0 :
            print("\nTest can't be started, Because of no words")

        else :
            for word in dic.keys() :
                answer = input("%s : " % word)
                if answer == dic[word] :
                    num += 1
                    print("Correct!\n")
            
                else :
                    print("Wrong..\n")
                    
            score.append(num)
            print("You got %d answers." % num)

    if select == 6 :
        print("       ScoreBoard")
        print("========================")
        score.sort(reverse = True)
        rank = []
        
        for i in score :
            rank.append(score.index(i) + 1)

        for k in rank :
            print(k, " rank    ", score[k-1], "answers")
            


    if select == 7 :
        print("Thanks for using dictionary")
        break
































        
        
            
            
    
    
