import pandas as pd

data={
    "name":["karthick", "Ragu", "Ram"],
    "location":["trichy", "Chennai", "Madurai"]
}

df=pd.DataFrame(data)

print(df)


# to see available method in pandas
# print(dir(pd))

# to see available method one by one in pandas
# for x in dir(pd):
#     print (x)