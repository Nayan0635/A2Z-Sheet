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

# Now assign the correct column names
df.columns = ['X1', 'X2', 'X3', 'X4', 'X5', 'X6', 'X7', 'X8', 'X9']

# Remove the first row if it contains old column names
df = df.drop(index=0)

# Reset index
df.reset_index(drop=True, inplace=True)

# Display
print(df.head())

# Check for missing values
df.isnull().sum()

# Split features and target
X = df.drop('X9', axis=1)
y = df['X9']

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
from sklearn.metrics import accuracy_score, f1_score

# Evaluate
acc_gnb = accuracy_score(y_test, y_pred_gnb)
f1_gnb = f1_score(y_test, y_pred_gnb, average='weighted')  # Add average parameter

# Print results
print("--- Gaussian Naive Bayes ---")
print(f"Accuracy: {acc_gnb:.2f}")
print(f"F1 Score: {f1_gnb:.2f}")

