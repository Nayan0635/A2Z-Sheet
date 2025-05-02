# House Price Prediction
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.linear_model import Lasso, Ridge
from sklearn.metrics import mean_squared_error, r2_score
from sklearn.linear_model import LinearRegression, Ridge, Lasso


df = pd.read_csv(r"C:\Users\nayan\Python\DataBase\housing_price_dataset.csv")
df.head()

df = df.drop(columns = ['Address'])
df.head()

x = df.iloc[:, :-1]
y = df.iloc[:, -1]

from sklearn.model_selection import train_test_split, GridSearchCV
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.25, random_state = 42)

from sklearn.preprocessing import StandardScaler
scaler = StandardScaler()
x_train_scaled = scaler.fit_transform(x_train)
x_test_scaled = scaler.transform(x_test)

model_lin_reg = LinearRegression()
model_lin_reg.fit(x_train_scaled, y_train)
ridge_reg = Ridge(alpha=1.0)
ridge_reg.fit(x_train_scaled, y_train)
lasso_reg = Lasso(alpha=1.0)
lasso_reg.fit(x_train_scaled, y_train)

y_pred_lin = model_lin_reg.predict(x_test_scaled)
y_pred_ridge = ridge_reg.predict(x_test_scaled)
y_pred_lasso = lasso_reg.predict(x_test_scaled)

r2_lin = r2_score(y_test, y_pred_lin)
r2_ridge = r2_score(y_test, y_pred_ridge)
r2_lasso = r2_score(y_test, y_pred_lasso)
print(f"R² Score for Linear Regression: {r2_lin:.4f}")
print(f"R² Score for Ridge Regression: {r2_ridge:.4f}")
print(f"R² Score for Lasso Regression: {r2_lasso:.4f}")

from sklearn.model_selection import GridSearchCV
alpha_values = {'alpha': [0.01, 0.1, 1, 100]}
ridge_search = GridSearchCV(Ridge(), param_grid=alpha_values, cv=5)
ridge_search.fit(x_train_scaled, y_train)
lasso_search = GridSearchCV(Lasso(), param_grid=alpha_values, cv=5)
lasso_search.fit(x_train_scaled, y_train)
print(f"Best alpha for Ridge: {ridge_search.best_params_}")
print(f"Best alpha for Lasso: {lasso_search.best_params_}")

plt.figure(figsize=(8, 5))
plt.scatter(y_test, y_pred_lin,marker = '+', color='blue', alpha=0.8)

plt.plot([y_test.min(), y_test.max()], [y_test.min(), y_test.max()], color='red', linestyle='dashed')
plt.xlabel("Actual House Price")
plt.ylabel("Predicted House Price")
plt.title("Actual vs Predicted House Prices (Linear Regression)")
plt.show()