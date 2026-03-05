lecture_info = {}
time_table = {1: "Open new class", 2: "Change limit of students", 3: "Change classroom",
              4: "Print lecture Info", 5: "Exit"}

def timetable() :
        print("*" * 40)
        print(" " * 15 + "Time table")
        print("*" * 40)
        for i in time_table.keys() :
            print("\t" + str(i) + ". " + time_table[i])
        print("*" * 40)
        
class lecture :
    
    def __init__(self, name, professor, limit, place) :
        self.name = name
        self.professor = professor
        self.limit = limit
        self.place = place    

    def changeLimitOfStudent(self) :
        self.name = input("Enter lecture name : ")
        self.limit = int(input("Enter new limit of students : "))

        lecture_info[self.name][1] = self.limit

    def changePlace(self) :
        self.name = input("Enter lecture name : ")
        self.place = input("Enter new classroom : ")

        lecture_info[self.name][2] = self.place
        
    def printInfo(self) :
        self.name = input("Enter lecture name : ")
        print("Professor : " + lecture_info[self.name][0])
        print("Number of students : " + str(lecture_info[self.name][1]))
        print("Place : " + lecture_info[self.name][2])

name = ""
professor = ""
limit = 0
place = ""

lec = lecture(name, professor, limit, place)       

while True :
    timetable()
    
    choose = int(input("Choose >> "))

    if choose == 1 :
        name = input("Lecture name : ")
        professor = input("Professor : ")
        limit = int(input("Limit of student : "))
        place = input("Place : ")

        lecture_info[name] = [professor, limit, place]

    elif choose == 2 :
        lec.changeLimitOfStudent()

    elif choose == 3 :
        lec.changePlace()

    elif choose == 4 :
        lec.printInfo()

    elif choose == 5 :
        break








































