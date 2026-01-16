# 🚀 Breadth First Search (BFS) Traversal of a Graph
This repository contains a **C++ implementation of Breadth First Search (BFS) traversal** for an **undirected, unweighted graph** using an **adjacency list**.

---

## 📌 What is BFS?

**Breadth First Search (BFS)** is a graph traversal algorithm that explores all vertices at the present depth before moving on to vertices at the next depth level.

It uses a **queue (FIFO data structure)** to maintain the order of traversal.

---

## 🔍 Traversal Order (Example)

### Input Graph:
0 — 1
0 — 2
1 — 2
2 — 3
3 — 3


### BFS Traversal starting from 0:


0 → 1 → 2 → 3

⏱️ Time & Space Complexity
✅ Time Complexity: O(V + E)

We visit each vertex once → O(V)

We traverse all edges once → O(E)
👉 Total: O(V + E)

✅ Space Complexity: O(V)

Visited array → O(V)

Queue → O(V) (in worst case)
👉 Total: O(V)
