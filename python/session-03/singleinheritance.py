class Parent():
    def __init__(self):
        print("family name is bright services")
        
    def welcome(self):
        print("welcome to parent")
    def land(self):
        print("i have 2acr land")

class Child(Parent):
    def __init__(self):
        super().__init__()
        super().welcome()
        super().land()
        print("Child name is AIBATCH")

    def car(self):
        print("i do have BMW")


s=Child()


s.car()