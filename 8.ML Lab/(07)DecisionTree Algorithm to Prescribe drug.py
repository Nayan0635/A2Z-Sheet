import numpy as np


from sklearn.preprocessing import LabelEncoder
from sklearn.tree import DecisionTreeClassifier, export_graphviz
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix

import graphviz

# Load the dataset
import pandas as pd
df = pd.read_csv(r"C:\Users\nayan\Python\DataBase\drug.csv")

# #Check for missing values
# print(df.isnull().sum())

# Convert categorical features into numerical values using Label Encoding
le_sex = LabelEncoder()
df['Sex'] = le_sex.fit_transform(df['Sex'])

le_bp = LabelEncoder()
df['BP'] = le_bp.fit_transform(df['BP'])

le_cholesterol = LabelEncoder()
df['Cholesterol'] = le_cholesterol.fit_transform(df['Cholesterol'])

le_drug = LabelEncoder()
df['Drug'] = le_drug.fit_transform(df['Drug'])  # Encode target variable

# Define feature variables (X) and target variable (y)
X = df.drop(columns=['Drug'])  # Features: Age, Sex, BP, Cholesterol, Na_to_K
y = df['Drug']  # Target: Drug category

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# Print dataset shapes
print(f"Training Data Shape: {X_train.shape}")
print(f"Testing Data Shape: {X_test.shape}")

# Create Decision Tree classifier
dt = DecisionTreeClassifier(criterion="entropy", max_depth=4, random_state=42)

# Train the model
dt.fit(X_train, y_train)

# Predict on test data
y_pred = dt.predict(X_test)

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

# Visualizing the Decision Tree
dot_data = export_graphviz(dt, out_file=None, 
                           feature_names=X.columns,  
                           class_names=le_drug.classes_,  
                           filled=True, rounded=True, 
                           special_characters=True)  

graph = graphviz.Source(dot_data)
graph.render("decision_tree")  # Saves as a file
graph.view()  # Opens the visualization
