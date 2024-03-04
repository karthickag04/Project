import pandas as pd



data=pd.read_csv("laptop_price.csv", encoding='latin-1')

df=pd.DataFrame(data)

# to view first five datas
print(df.head())
# to view last five datas
print(df.tail())

# to view first and last five datas
print(df.head(10))
print(df.tail(10))

# dropna method to remove the rows which has empty values
print(df.head(10).dropna().to_string())
print(df.tail(10).dropna().to_string())
