class grandparents:

    def __init__(self,grandpaname, grandmaname, familyname) :
        self.grandfathername=grandpaname
        self.grandmothername=grandmaname
        self.familyname=familyname

    def welcome(self):
        return "Welcome to ", self.familyname, " wishes from ", self.grandfathername, " and ", self.grandmothername 
    
        

# x=grandparents("kalaingar","Dhayalu ammal","DMK")
# x.welcome()
        

"""

class mkazhagiri(grandparents):
    pass

x=mkazhagiri("kalaingar","Dhayalu ammal","DMK")
x.welcome()

"""       



class mkazhagiri(grandparents):
    def __init__(self, grandpaname, grandmaname, familyname, fathername,mothername):
        self.fathername=fathername
        self.mothername=mothername
        super().__init__(grandpaname, grandmaname, familyname)

    def thanks(self):
        print("Hi..! Granpa ", self.grandfathername ,"and Grandma ", self.grandmothername , " We ", self.fathername, "and ", self.mothername, " thank you for warm welcome to our " , self.familyname, "family")

class dhayanithi(mkazhagiri):
    def welcome(self):
        print( super().welcome())

# x=mkazhagiri("kalaingar","Dhayalu ammal","DMK")
# x.welcome()

x=dhayanithi(input("enter Grandpa name  "),input("enter Grandma name  "),input("enter Family name  "), input("enter Father name  "), input("enter mother name  "))
x.welcome()
x.thanks()
