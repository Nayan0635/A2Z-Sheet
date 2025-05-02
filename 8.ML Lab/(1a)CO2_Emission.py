#predict CO2 Emission

#Read CSV File
import pandas as pd
df = pd.read_csv(r"C:\Users\nayan\Python\DataBase\Petrol_Consumption.csv")
# print(df.head())

# Feature engineering
df = df.drop(columns= ['one'])
print(df.head())

# Select Features and Target
x = df.iloc[:, : -1]
y = df.iloc[:, -1]

#Train-test data split
from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size = 0.25, random_state = 42)

# Model training
from sklearn.linear_model import LinearRegression
model = LinearRegression()
model.fit(x_train, y_train)
y_pred = model.predict(x_test)

# check error 
from sklearn.metrics import mean_squared_error, r2_score
mse = mean_squared_error(y_test, y_pred)
print("Mean Squared Error: ",mse)
r2 = r2_score(y_test, y_pred)
print("R2 Score: ",r2)

# Graph plot
import matplotlib.pyplot as plt
# plt.figure(figsize = (8,6))
plt.scatter(y_test, y_pred, color = 'red', alpha = 0.7)
plt.plot([y_test.min(), y_test.max()], [y_test.min(), y_test.max()], color = 'black', linestyle = 'dashed')
plt.title('Actual vs Predicted Co2 Emission')
plt.xlabel('Actual Co2 Emission')
plt.ylabel('Predicted Co2 Emission')
plt.show()