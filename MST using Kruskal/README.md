🌉 Kruskal’s Algorithm – Minimum Spanning Tree (MST)

"Pick the lightest edges, avoid cycles, and connect the graph at minimum cost."

This repository contains a clean, optimized, and interview‑ready implementation of Kruskal’s Algorithm for finding the Minimum Spanning Tree (MST) of a graph, as commonly asked on GeeksforGeeks.

📌 Problem Overview

Given a weighted, undirected, and connected graph with:

V vertices

E edges

Each edge is represented as:

[u, v, w]

where:

u and v are vertices

w is the weight of the edge

🎯 Goal: Compute the sum of weights of all edges included in the Minimum Spanning Tree (MST).

🧠 Core Concepts Used

Minimum Spanning Tree (MST)

Kruskal’s Algorithm (Greedy)

Edge Sorting

Disjoint Set Union (DSU) / Union‑Find

Path Compression

Union by Rank

⚙️ Algorithm – Kruskal’s Approach
Why Kruskal’s Algorithm?

Works directly on edge list (no adjacency list required)

Simple and intuitive greedy approach

Very efficient with DSU

Preferred when edges are already given

High‑Level Steps

Sort all edges by increasing weight

Initialize DSU for cycle detection

Pick the smallest edge that doesn’t form a cycle

Add it to MST and union the sets

Repeat until V − 1 edges are selected

⏱️ Time & Space Complexity
Metric	Complexity
Time	O(E log E)
Space	O(V)

🧪 Sample Input
V = 3
Edges = [[0,1,5], [1,2,3], [0,2,1]]
✅ Output
4
📝 Explanation

Edges chosen for MST:

0 → 2 (weight = 1)

1 → 2 (weight = 3)

Total MST Weight = 4

🔥 Key Takeaways

Kruskal’s Algorithm is edge‑centric

DSU efficiently prevents cycles

MST always has V − 1 edges

Greedy choice is always optimal here
