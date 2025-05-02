import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
from scipy.cluster.hierarchy import linkage, dendrogram

# Load and preprocess
data = pd.read_csv(r"C:\Users\nayan\Python\DataBase\cars_clus.csv")
data_clean = data.drop(['manufact', 'model', 'type', 'partition'], axis=1).replace('$null$', np.nan)
data_clean = data_clean.apply(pd.to_numeric).dropna()
data_scaled = StandardScaler().fit_transform(data_clean)

# Plot dendrograms
plt.figure(figsize=(20, 6))
for i, method in enumerate(['single', 'complete', 'average']):
    plt.subplot(1, 3, i + 1)
    dendrogram(linkage(data_scaled, method=method), orientation='top', distance_sort='ascending', show_leaf_counts=True)
    plt.title(f'Agglomerative Clustering\n({method.capitalize()} Linkage)')
    plt.xlabel('Sample index')
    plt.ylabel('Distance')
plt.tight_layout()
plt.show()