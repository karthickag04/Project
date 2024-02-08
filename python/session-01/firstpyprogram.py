#comments in python

"""

this is
multiline comments in 
python

"""
#variable declaration in python
x =10  # < --- correct method
print(x)

#do's and don'ts of variable declaration

# 2x=10 <--- wrong method
# $x=10;

_x=11;  # < --- correct method 
print(_x); 


print(type(x));

x1=float(10);
print(x1); 
print(type(x1));


x1=10.25;
print(x1); 
print(type(x1));

x1="karthick"
print(x1);
print(type(x1));

x1='s'
print(x1);
print(type(x1));


x1=10.46546546456465465464654654654
print(x1);
print(type(x1));


x1=["karthick", "ram", "ravi", "ragu"];
print(x1);
print(type(x1));

# for (int i =0; i<=3; i++){ printf(x1[i])}
for value in x1:
    
    if value=="ram":

        continue
    print(value)


x1="karthick ragu ravi ram raju"
print(x1)
print(type(x1))
x1=x1.split(" ")
print(x1)
print(type(x1))

x1[0]="yoga"
print(x1)

x1="karthick ragu ravi ram raju"
x1= x1.replace("karthick", "karthick AG")
print(x1)






