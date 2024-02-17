from tkinter import *
import mysql.connector

app=Tk()
app.title("my first python gui app")
app.geometry("500x500+500+100")
app.config(bg="gray")
# app.state("zoomed")


def mydbconnection():
    con=mysql.connector.connect(

    host="192.168.1.240",
    user="AIBATCH01",
    password="AI@123",
    database="a"
    )
    return con
 
def clickresult():
    a=int(inputbox1.get())
    b=int(inputbox2.get())
    # c=a+b
    # lblTitle.config(text=c, fg="red")
    
    con=mydbconnection()
    print("hi  ",con)

    result=con.cursor()
    sql = "INSERT INTO stdname (value1, value2) VALUES (%s, %s)"
    val = (a, b)
    result.execute(sql, val)
    con.commit()
    print(result.rowcount, "details inserted")
    con.close()


lblTitle=Label(app,text="value1")
lblTitle.grid(row=0, column=1, padx=40, pady=40)

inputbox1=Entry(app,width=30)
inputbox1.grid(row=0, column=2)


lblTitle1=Label(app,text="value2")
lblTitle1.grid(row=1, column=1, padx=40, pady=40)

inputbox2=Entry(app,width=30)
inputbox2.grid(row=1, column=2)


clickme=Button(app, text="Insert", command=clickresult, )
clickme.grid(row=2, column=8, padx=40, pady=40)



app.mainloop()

# def clickresult():
#     a=10
#     b=10

#     print("added value is ", a+b)

# clickresult()

