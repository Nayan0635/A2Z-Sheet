import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns

from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.naive_bayes import GaussianNB, BernoulliNB
from sklearn.metrics import accuracy_score, f1_score, confusion_matrix, classification_report

# Load dataset properly
df = pd.read_csv(r"C:\Users\nayan\Python\DataBase\pima-indians-diabetes.data.csv")

# select features and targets
X = df.iloc[:, : -1]
y = df.iloc[:, -1]

# Train-test split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Feature scaling (optional for Naive Bayes, but improves results sometimes)
scaler = StandardScaler()
X_train_scaled = scaler.fit_transform(X_train)
X_test_scaled = scaler.transform(X_test)

# Gaussian Naive Bayes
gnb = GaussianNB()
gnb.fit(X_train_scaled, y_train)
y_pred_gnb = gnb.predict(X_test_scaled)

# Bernoulli Naive Bayes
bnb = BernoulliNB()
bnb.fit(X_train_scaled, y_train)
y_pred_bnb = bnb.predict(X_test_scaled)

# Step 5 - Evaluation for GaussianNB
# Evaluate
acc_gnb = accuracy_score(y_test, y_pred_gnb)
f1_gnb = f1_score(y_test, y_pred_gnb, average='weighted')  # Add average parameter

# Print results
print("--- Gaussian Naive Bayes ---")
print(f"Accuracy: {acc_gnb}")
print(f"F1 Score: {f1_gnb}")

# # Check for missing values
# print(df.isnull().sum())
