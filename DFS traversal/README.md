# 🔥 Depth First Search (DFS) Traversal — C++ Implementation
This repository contains a **recursive C++ implementation of Depth First Search (DFS) traversal** for an **undirected, unweighted graph** using an **adjacency list representation**.

---

## 📌 What is DFS?

**Depth First Search (DFS)** is a graph traversal technique that explores as far as possible along one branch before backtracking.

It follows the principle:

> *Go deep first, then explore neighbors.*

DFS is usually implemented using:
- Recursion (this repo ✅)  
or  
- Explicit Stack

---

## 🔍 Example Graph
0 — 1
0 — 2
1 — 3
2 — 4


### DFS Traversal (starting from 0)


0 → 1 → 3 → 2 → 4

⏱️ Time & Space Complexity
✅ Time Complexity: O(V + E)

Each vertex is visited once → O(V)
Each edge is explored once → O(E)
👉 Total: O(V + E)

✅ Space Complexity: O(V)

visited[] array → O(V)
Recursion stack (worst case) → O(V)
👉 Total: O(V)

