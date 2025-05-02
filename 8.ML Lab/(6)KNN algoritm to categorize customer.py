import numpy as np

from sklearn.metrics import accuracy_score, classification_report, confusion_matrix

import pandas as pd
df = pd.read_csv(r"C:\Users\nayan\Python\DataBase\teleCust.csv")

# Check the data types
print(df.dtypes)

# Convert categorical features if necessary (e.g., 'gender', 'marital')
df['gender'] = df['gender'].astype('category').cat.codes
df['marital'] = df['marital'].astype('category').cat.codes
df['retire'] = df['retire'].astype('category').cat.codes

# Define feature variables (excluding 'custcat')
X = df.drop(columns=['custcat'])

# Define target variable
y = df['custcat']

# Split into training and testing 
from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Print dataset shapes
print(f"Training Data Shape: {X_train.shape}")
print(f"Testing Data Shape: {X_test.shape}")

# Standardize feature variables
from sklearn.preprocessing import StandardScaler
scaler = StandardScaler()
X_train = scaler.fit_transform(X_train)
X_test = scaler.transform(X_test)

# Define KNN classifier with k=5
from sklearn.neighbors import KNeighborsClassifier
knn = KNeighborsClassifier(n_neighbors=5)

# Train the model
knn.fit(X_train, y_train)

# Predict on test data
y_pred = knn.predict(X_test)

# Calculate Accuracy
accuracy = accuracy_score(y_test, y_pred) * 100
print(f"Accuracy: {accuracy:.2f}%")

# Generate Classification Report
print("\nClassification Report:\n", classification_report(y_test, y_pred))

# Confusion Matrix
cm = confusion_matrix(y_test, y_pred)

import matplotlib.pyplot as plt
import seaborn as sns
sns.heatmap(cm, annot=True, fmt="d", cmap="Blues")
plt.xlabel("Predicted")
plt.ylabel("Actual")
plt.title("Confusion Matrix")
plt.show()

# Test different k values to find the optimal one
error_rates = []

for k in range(1, 21):
    knn = KNeighborsClassifier(n_neighbors=k)
    knn.fit(X_train, y_train)
    y_pred_k = knn.predict(X_test)
    error_rates.append(1 - accuracy_score(y_test, y_pred_k))

# Plot Error Rate vs K Value
plt.figure(figsize=(10, 6))
plt.plot(range(1, 21), error_rates, marker='o', linestyle='dashed', color='blue')
plt.xlabel("K Value")
plt.ylabel("Error Rate")
plt.title("Error Rate vs. K Value")
plt.show()
