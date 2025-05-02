#predict slary of employee
import pandas as pd
import numpy as np
df = pd.read_csv(r"C:\Users\nayan\Python\DataBase\salary_data.csv")
df.head()

x = df['YearsExperience'].values
y = df['Salary'].values

theta0, theta1 = 0, 0  # Intercept, Slope
alpha, epochs = 0.01, 1000  # Learning Rate, Number of Iterations
m = len(y)  # Number of data points
loss_history = []
for epoch in range(epochs):
    y_pred = theta0 + theta1 * x
    loss = (1/(2*m)) * np.sum((y_pred - y) ** 2)
    loss_history.append(loss)
    d_theta0 = (1/m) * np.sum(y_pred - y)
    d_theta1 = (1/m) * np.sum((y_pred - y) * x)
    theta0 -= alpha * d_theta0
    theta1 -= alpha * d_theta1
    if epoch % 100 == 0:
        print(f"Epoch {epoch}, Loss: {loss}")
print(f"Final Parameters: theta0 = {theta0}, theta1 = {theta1}")

import matplotlib.pyplot as plt
plt.plot(range(epochs), loss_history, color='blue', alpha = 0.5)
plt.xlabel("Epochs")
plt.ylabel("Loss (MSE)")
plt.title("Loss Curve for Gradient Descent")
plt.show()

plt.scatter(x, y, color='blue', label="Actual Data")
plt.plot(x, theta0 + theta1 * x, color='red', label="Regression Line")
plt.xlabel("Years of Experience")
plt.ylabel("Salary")
plt.title("Salary Prediction using Gradient Descent")
plt.legend()
plt.show()

y_pred_final = theta0 + theta1 * x
from sklearn.metrics import  r2_score
r2 = r2_score(y, y_pred_final)
print(f"R² Score: {r2}")