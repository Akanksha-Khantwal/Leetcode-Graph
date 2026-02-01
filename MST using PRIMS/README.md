🌳 Minimum Spanning Tree (MST) – GeeksforGeeks

"Connect all vertices with minimum cost and no cycles."
This repository contains a clean, efficient, and interview‑ready solution for the Minimum Spanning Tree (MST) problem from GeeksforGeeks, implemented in C++.

📌 Problem Statement

Given a weighted, undirected, and connected graph with:

V vertices

E edges

Each edge is represented as:

[u, v, w]

where u and v are vertices and w is the edge weight.

🔹 Goal: Find the sum of weights of the edges in the Minimum Spanning Tree (MST).

🧠 Key Concepts Used

Graph Representation (Edge List → Adjacency List)

Prim’s Algorithm

Priority Queue (Min Heap)

Greedy Strategy

Visited Array

⚙️ Algorithm Used – Prim’s Algorithm
Why Prim’s?

Works efficiently for connected graphs

Ideal when graph is given in adjacency list form

Time Efficient with Min Heap

High‑Level Steps

Start from any vertex (here, vertex 0)

Always pick the edge with minimum weight that connects a new vertex

Avoid cycles using a visited[] array

Repeat until all vertices are included

⏱️ Time & Space Complexity
Metric	Complexity
Time	O(E log V)
Space	O(V + E)
💻 C++ Implementation
#include <bits/stdc++.h>
using namespace std;


🧪 Sample Input
V = 3
Edges = [[0,1,5], [1,2,3], [0,2,1]]
✅ Output
4
📝 Explanation

MST edges selected:

0 → 2 with weight 1

2 → 1 with weight 3

Total MST Weight = 1 + 3 = 4

🎯 Key Takeaways

MST connects all vertices with minimum total cost

No cycles are allowed

Prim’s Algorithm is a greedy algorithm

Always check indegree = outdegree is NOT required for MST (that’s for Euler problems 😉)

