# 🔴 Cycle Detection in a Directed Graph (DFS Approach)
## 📌 Overview

This repository contains an implementation of **Cycle Detection in a Directed Graph using Depth First Search (DFS)** in C++.

We use:
- `visited[]` → to track visited nodes  
- `path[]` → to track nodes in the current recursion stack (current DFS path)

If we encounter a node that is already present in the current recursion path (`path[node] == true`), then a **cycle exists** in the graph.

---

## 🧠 Core Idea

### DFS + Recursion Stack Method:
1. Mark the current node as **visited**.
2. Mark the node in **path (recursion stack)**.
3. For each neighbor:
   - If neighbor is already in the current path → **Cycle detected**
   - If neighbor is not visited, call DFS recursively
4. Remove the node from path before returning.

🔍 Example
Input
V = 4
Edges = [[0,1], [1,2], [2,3], [3,1]]

Output
true


🔁 Explanation: There is a cycle: 1 → 2 → 3 → 1

⏱️ Time & Space Complexity
Metric	Complexity
Time Complexity	O(V + E)
Space Complexity	O(V) (visited + path + recursion stack)

