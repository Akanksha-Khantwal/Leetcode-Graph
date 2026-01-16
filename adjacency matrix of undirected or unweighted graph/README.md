# 📌 Adjacency Matrix Representation of an Undirected Unweighted Graph

This repository demonstrates how to represent an **undirected and unweighted graph** using an **Adjacency Matrix** in C++.

---

## 🔹 What is an Adjacency Matrix?

An **adjacency matrix** is a 2D array of size **V × V** (where V is the number of vertices). It is used to represent a graph such that:

- `matrix[i][j] = 1` → There is an edge between vertex `i` and `j`
- `matrix[i][j] = 0` → No edge between `i` and `j`

Since the graph is **undirected**, the matrix is **symmetric**, i.e.:


---

## 🧠 Characteristics

| Feature | Description |
|--------|-------------|
| Graph Type | Undirected |
| Edge Type | Unweighted |
| Space Complexity | O(V²) |
| Edge Lookup | O(1) (very fast) |
| Suitable for | Dense graphs |
| Not ideal for | Large sparse graphs |

---

## 📈 Example Graph

Edges:
0 — 1
1 — 2
2 — 3


Adjacency Matrix:

|   | 0 | 1 | 2 | 3 |
|---|---|---|---|---|
| **0** | 0 | 1 | 0 | 0 |
| **1** | 1 | 0 | 1 | 0 |
| **2** | 0 | 1 | 0 | 1 |
| **3** | 0 | 0 | 1 | 0 |
