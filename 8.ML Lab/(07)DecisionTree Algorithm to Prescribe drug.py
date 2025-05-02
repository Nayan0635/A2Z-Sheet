import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import graphviz

from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier, export_graphviz
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix

# Load the dataset
df = pd.read_csv(r"C:\Users\nayan\Python\DataBase\drug.csv")

# Convert categorical features into numerical values using Label Encoding
for col in ['Sex', 'BP', 'Cholesterol']:
    df[col] = LabelEncoder().fit_transform(df[col])  # Encode target variable
le_drug = LabelEncoder()
df['Drug'] = le_drug.fit_transform(df['Drug'])

# select features and targets
X = df.iloc[:, : -1]
y = df.iloc[:, -1]

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
print(f"Accuracy: {accuracy}%")

# Generate Classification Report
print("\nClassification Report:\n", classification_report(y_test, y_pred))

# Confusion Matrix
cm = confusion_matrix(y_test, y_pred)

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