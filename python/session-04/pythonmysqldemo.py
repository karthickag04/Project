#before import use the following comment in your terminal or cmd without #
#python -m pip install mysql-connector-python

import mysql.connector

con=mysql.connector.connect(

host="192.168.1.240",
user="AIBATCH01",
password="AI@123",
database="a"

)

print(con)

result=con.cursor()
result.execute("show tables")
result_show=result.fetchall()

for value in result_show:
    print(value)

result.execute("select * from sys_info")
result_show=result.fetchall()

for value in result_show:
    print(value)


result.execute("delete from sys_info where sno=4")
result.execute("select * from sys_info")
result_show=result.fetchall()

for value in result_show:
    print(value)
