import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.metrics import  r2_score
df = pd.read_csv(r"C:\Users\nayan\Python\DataBase\salary_data.csv")
df.head()

x = df['YearsExperience'].values.reshape(-1, 1)
y = df['Salary'].values.reshape(-1, 1)

theta0 = 0  # Intercept
theta1 = 0  # Slope
alpha = 0.01  # Learning Rate
epochs = 1000  # Number of Iterations
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
        print(f"Epoch {epoch}, Loss: {loss:.4f}")
print(f"Final Parameters: theta0 = {theta0:.4f}, theta1 = {theta1:.4f}")
plt.plot(range(epochs), loss_history, color='blue', alpha = 0.5)
plt.xlabel("Epochs")
plt.ylabel("Loss (MSE)")
plt.title("Loss Curve for Gradient Descent")
plt.show()
plt.scatter(x, y, color='blue', alpha = 0.5, label="Actual Data")
y_line = theta0 + theta1 * x
plt.plot(x, y_line, color='red', label="Regression Line")
plt.xlabel("Years of Experience")
plt.ylabel("Salary")
plt.title("Salary Prediction using Gradient Descent")
plt.legend()
plt.show()
y_pred_final = theta0 + theta1 * x
r2 = r2_score(y, y_pred_final)
print(f"R² Score: {r2:.4f}")