# 📌 Adjacency List Representation of an Undirected Graph (C++)

This repository demonstrates how to represent an **undirected and unweighted graph** using an **Adjacency List** in C++.

---

## 🔹 What is an Adjacency List?

An **adjacency list** represents a graph as a list (or vector) for each vertex, where each list contains all the vertices connected to it.

For an undirected graph:
- If there is an edge between `u` and `v`, then:
  - `v` is added to the list of `u`
  - `u` is added to the list of `v`

---

## 🧠 Characteristics

| Feature | Description |
|--------|-------------|
| Graph Type | Undirected |
| Edge Type | Unweighted |
| Space Complexity | O(V + E) |
| Best for | Sparse graphs |
| Edge Lookup | O(degree of vertex) |

---

## 📈 Example Input

4 4
0 1
1 2
2 3
0 2


### Corresponding Adjacency List:

0 -> 1 2
1 -> 0 2
2 -> 1 3 0
3 -> 2
