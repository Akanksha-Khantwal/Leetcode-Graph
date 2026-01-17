# 🔁 Cycle Detection in an Undirected Graph (Using DFS)

This repository contains an efficient implementation of **Cycle Detection in an Undirected Graph using Depth First Search (DFS)**.

The algorithm is commonly used in graph problems and is frequently asked in interviews and competitive programming platforms like **GeeksForGeeks** and **LeetCode**.

---

## 📌 Problem Statement

Given an **undirected graph**, determine whether it contains a **cycle** or not.

A cycle exists if we encounter an already visited vertex that is **not the parent** of the current vertex during DFS traversal.

---

## 🚀 Approach

We use:

- **Adjacency List Representation**
- **Depth First Search (DFS)**
- **Visited Array**
- **Parent Tracking**

### 🔍 Key Idea:
While traversing:
- If we visit a node that is already visited **and is not the parent**, then a cycle exists.

---

## 🧠 Algorithm

1. Start DFS from each unvisited vertex (to handle disconnected graphs).
2. Mark nodes as visited.
3. Recursively explore neighbors.
4. If a visited neighbor is found that is not the parent → **Cycle Detected**.

⏱️ Time & Space Complexity
Metric	Complexity
Time	O(V + E)
Space	O(V) (visited array + recursion stack)

---

