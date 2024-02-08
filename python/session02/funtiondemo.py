# #addressing space issue --> use  tab key in keyboard
# def myname():
#     print("this is kathick ag")
#     print("welcome")
#     name="karthick1"
#     lname="AG"
#     if name=="karthick":
#         print ("yes you are karthick")
#         print("welcome")
#     print("skipped above if due to name mismatch")   
#     for x in name:
#         print(x)  
# myname()

#use of function
# to reuse the function again and again
def myname1():
    print("I am karthick AG")
myname1()
myname1()
myname1()



def myname2():
    name="karthick"
    lname="AG"
    year=2024
    # printing value as it is.
    print("hi..!" , name)
    print("hi..!" , name , lname)
    print("hi..!" , name , lname , "welcome to year of ", year)

    # printing value using concatenation
    print("--------")
    print("printing value using concatenation")
    print("hi..!" + name)
    print("hi..!" + name + " " + lname)
    print("hi..!" + name + " " + lname + "welcome to year of " + str(year))
    

myname2()