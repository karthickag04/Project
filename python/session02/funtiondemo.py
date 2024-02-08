def myname():
    name1 = "karthick"
    year = 2024

    #printing values
    print("Hi..!  " , name1)
    print("Hi..!  " , name1, " welcome to the year of ", year)

    # casting values
    print("Hi..!  " + name1)
    print("Hi..!  " + name1 + " welcome to the year of " + str(year))

myname()
     

class grandparents:
    def __init__(self, grandmaname, grandpaname, familyname) :
        self.grandmaname=grandmaname
        self.grandpaname=grandpaname
        self.familyname=familyname
    def welcome(self):
        print("welcome to ", self.familyname, " family..! wishes from ", self.grandmaname, " and ", self.grandpaname)

# x = grandparents("seetha","ram","ramayanam")
# x.welcome()

class parents(grandparents):
    def __init__(self, mothername, fathername, grandmaname, grandpaname, familyname):
        self.mothername=mothername
        self.fathername=fathername
        super().__init__(grandmaname, grandpaname, familyname)
        
        
    
    def thanks(self):
        print ("Hi ..! " , self.grandmaname, "and ", self.grandpaname , " We ", self.mothername, " and ", self.fathername ," both thank you for your warm welcome to our ", self.familyname, " family ")

x = grandparents("seetha","ram","ramayanam")
x.welcome()
y =parents("ganesh","murugan","seetha","ram","ramayanam")
y.thanks()

