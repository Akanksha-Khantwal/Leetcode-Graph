

This repository contains an implementation of **Topological Sorting using Depth First Search (DFS)** in C++.  
Topological Sort is used for **Directed Acyclic Graphs (DAGs)** and is widely used in:


## 🚀 Problem Statement

Given a **Directed Acyclic Graph (DAG)** with `V` vertices and a list of directed edges, return one valid **topological ordering** of the vertices.

---

## ✅ Approach Used

We use **DFS-based Topological Sorting**, where:

1. Perform DFS traversal.
2. After completely exploring a node, push it onto a stack.
3. Finally, pop elements from the stack to get the topological order.

This ensures that a node appears **before all nodes that depend on it**.
🔍 Example
Input:
V = 6
Edges = {{5, 2}, {5, 0}, {4, 0}, {4, 1}, {2, 3}, {3, 1}}

Output (One Possible Order):
5 4 2 3 1 0

⏱️ Time and Space Complexity
Metric	Complexity
Time Complexity	O(V + E)
Space Complexity	O(V) (for stack + visited array)

