🔗 Articulation Points in a Graph (Tarjan’s Algorithm)

GeeksforGeeks | Graph | DFS | Critical Connections

An articulation point (or cut vertex) is a vertex in an undirected graph whose removal increases the number of connected components.
In simple words: removing this node breaks the graph 💥.

This repository contains an efficient and optimized C++ solution using Tarjan’s Algorithm (DFS based approach).

📌 Problem Statement

Given an undirected graph with V vertices and adjacency list representation, find all articulation points in the graph.

If no articulation point exists, return -1

Vertices are numbered from 0 to V-1

📍 Source: GeeksforGeeks – Articulation Point

🧠 Intuition

During Depth First Search (DFS):

Track when a node is first discovered (disc[])

Track the lowest reachable ancestor (low[])

Identify vertices that disconnect the graph when removed

⚙️ Algorithm Used
🔥 Tarjan’s Algorithm (DFS)

Key ideas:

Use discovery time and low-link values

A node is an articulation point if:

It is a root of DFS tree with more than one child

OR it is not root, and there exists a child such that
low[child] ≥ disc[node]

🧩 Steps Followed

Initialize disc, low, visited, and arti arrays

Run DFS for all unvisited nodes (handles disconnected graphs)

Update low[] values using back-edges

Mark articulation points based on Tarjan’s conditions

Collect and return results



⏱️ Time & Space Complexity
Complexity	Value
Time	O(V + E)
Space	O(V) (DFS stack + arrays)
📊 Example

Input

V = 5
Edges: 0-1, 1-2, 2-0, 1-3, 3-4


Output

1 3


📌 Removing node 1 or 3 disconnects the graph.

🚀 Key Takeaways

Articulation points help identify critical nodes in networks

Used in network design, fault tolerance, and security

Tarjan’s Algorithm makes it efficient and elegant
