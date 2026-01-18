# 🔷 Topological Sorting using Kahn’s Algorithm (C++)
## 📌 Overview

This repository contains an implementation of **Topological Sorting using Kahn’s Algorithm** in C++.

Kahn’s Algorithm is a **BFS-based approach** for Topological Sorting in a **Directed Acyclic Graph (DAG)**. It uses the concept of **indegree of nodes** and processes nodes with zero indegree first.

---

## 🎯 When is it used?

Topological Sort is useful in:

- Course scheduling (prerequisites)
- Task scheduling in operating systems  
- Build systems (make, npm, etc.)
- Dependency resolution  
- Compiler design  

---

## 🧠 Idea Behind Kahn’s Algorithm

### Steps:
1. Compute **indegree** of all vertices.
2. Push all vertices with **indegree = 0** into a queue.
3. Remove a node from the queue and add it to the result.
4. Reduce indegree of its neighbors by 1.
5. If any neighbor’s indegree becomes 0, push it into the queue.
6. Repeat until the queue is empty.

If all vertices are processed, the graph is a DAG; otherwise, a cycle exists.

---

🔍 Example
Input
V = 6
Edges = {{5,2}, {5,0}, {4,0}, {4,1}, {2,3}, {3,1}}

Output (One Valid Order)
4 5 2 0 3 1


💡 Note: Multiple valid topological orders may exist.

⏱️ Time and Space Complexity
Metric	Complexity
Time Complexity	O(V + E)
Space Complexity	O(V) (Queue + Indegree array)
