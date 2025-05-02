# used car price prediction

# read the file
import pandas as pd
df = pd.read_csv(r"C:\Users\nayan\Python\DataBase\used_cars_dataset.csv")
print(df.head()) #print the dataset

# feature engineering
from sklearn.preprocessing import LabelEncoder
encode_columns = ["name","fuel","seller_type","transmission","owner"]
for col in encode_columns:
    df[col] = LabelEncoder().fit_transform(df[col])
print("\n Encoded dataset: \n",df.head())

# select features and targets
x = df.iloc[:, : -1]
y = df.iloc[:, -1]

# train-test split
from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.2, random_state = 42)

# model trainning
from sklearn.linear_model import LinearRegression
model = LinearRegression()
model = model.fit(x_train, y_train)
y_pred = model.predict(x_test)

# check error 
from sklearn.metrics import mean_squared_error, r2_score
mse = mean_squared_error(y_test, y_pred)
print("Mean Squared Error: ",mse)
r2 = r2_score(y_test, y_pred)
print("R2 Score: ",r2)

# Graph plot
import matplotlib.pyplot as plt
plt.figure(figsize = (8,6))
plt.scatter(y_test, y_pred, color = 'red', alpha=0.2)
plt.plot([y_test.min(), y_test.max()], [y_test.min(), y_test.max()], color = 'black', linestyle = 'dashed')

plt.title("Actusl vs Predicted Car price")
plt.xlabel("Actual Value")
plt.ylabel("predicted Value")
plt.show()
