import numpy as np
from scipy.optimize import curve_fit
from sklearn.metrics import r2_score

import pandas as pd
df = pd.read_csv(r"C:\Users\nayan\Python\DataBase\china_gdp.csv")

def sigmoid(x, L, k, x0):
    return L / (1 + np.exp(-k * (x - x0)))

x = df["Year"].values
y = df["Value"].values
popt, _ = curve_fit(sigmoid, x, y, p0=[max(y), 0.1, 2000])  # Initial guesses for L, k, t0
L_opt, k_opt, x0_opt = popt
print(f"Optimized Parameters: L={L_opt:.4f}, k={k_opt:.4f}, t0={x0_opt:.4f}")

x_range = np.linspace(min(x), max(x), 100)
y_pred = sigmoid(x_range, L_opt, k_opt, x0_opt)

import matplotlib.pyplot as plt
plt.scatter(x, y, label="Actual GDP Data", color="blue")
plt.plot(x_range, y_pred, label="Sigmoid Fit", color="red")
plt.xlabel("Year")
plt.ylabel("GDP (Trillion USD)")
plt.title("China GDP Prediction (1960-2014)")
plt.legend()
plt.show()

y_pred_final = sigmoid(x, L_opt, k_opt, x0_opt)
r2 = r2_score(y, y_pred_final)
print(f"R² Score: {r2:.4f}")