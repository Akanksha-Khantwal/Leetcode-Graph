# 🔄 Euler Path & Euler Circuit – Graph Theory (C++ | GFG)

> A clean and beginner-friendly implementation of **Euler Path** and **Euler Circuit** using **Graph Theory**, written in **C++**, inspired by the classic **GeeksforGeeks** problem.

---

## 📌 What is an Euler Path & Circuit?

In graph theory:

- 🟢 **Euler Path**: A path that visits **every edge exactly once**
- 🔵 **Euler Circuit**: An Euler Path that **starts and ends at the same vertex**

---

## 🧠 Key Concepts Used

- Graph Representation (Adjacency List)
- Degree of vertices
- DFS / BFS for connectivity
- Graph traversal logic
- Euler conditions checking

---

## 📘 Euler Conditions

### 🔸 Undirected Graph

| Condition | Result |
|---------|--------|
| All vertices have even degree | ✅ Euler Circuit |
| Exactly 2 vertices have odd degree | ✅ Euler Path |
| Otherwise | ❌ Not Eulerian |

---

### 🔸 Directed Graph

| Condition | Result |
|---------|--------|
| in-degree = out-degree for all vertices | ✅ Euler Circuit |
| One vertex (out = in + 1) & one vertex (in = out + 1) | ✅ Euler Path |

---

## 🧪 Example
Input Graph:
0 -- 1
| |
3 -- 2

Output:
Euler Circuit Exists

⏱ Time & Space Complexity
Metric	Complexity
Time	O(V + E)
Space	O(V)
