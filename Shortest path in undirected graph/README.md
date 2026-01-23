# 🚀 Shortest Path in Undirected Graph (BFS)

## 📌 Problem Overview
Given an **undirected and unweighted graph**, find the **shortest distance from a source node to all other vertices**.

If a vertex is **not reachable**, return `-1` for that vertex.

This problem is solved efficiently using **Breadth First Search (BFS)**.

---

## 🧠 Key Idea
- Since the graph is **unweighted**, **BFS guarantees the shortest path**
- Each level in BFS represents a distance increment of **1**
- Use:
  - **Adjacency List** for graph representation
  - **Queue** for BFS traversal
  - **Visited array** to avoid revisiting nodes
  - **Distance array** to store shortest distances

---

## 🛠️ Algorithm Steps
1. Build adjacency list from the given edge list
2. Initialize:
   - `distance[]` with `-1`
   - `visited[]` with `false`
3. Push the source node into queue
4. Perform BFS:
   - For each unvisited neighbor:
     - Mark it visited
     - Update distance = parent distance + 1
     - Push into queue
5. Return the distance array

---

## ⏱️ Complexity Analysis
| Metric | Value |
|------|-------|
| **Time Complexity** | `O(V + E)` |
| **Space Complexity** | `O(V + E)` |

Where:
- `V` = number of vertices  
- `E` = number of edges  

📊 Example

Input

V = 5
Edges = {{0,1}, {0,2}, {1,3}, {2,4}}
Source = 0


Output

0 1 1 2 2

