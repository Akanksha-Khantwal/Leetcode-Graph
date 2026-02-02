🔁 Strongly Connected Components (SCC)
✨ Kosaraju’s Algorithm | Directed Graph | DFS

GeeksforGeeks | Graph Theory | Depth First Search

A Strongly Connected Component (SCC) in a directed graph is a group of vertices where every vertex is reachable from every other vertex in the same group.

This repository contains a clean and efficient C++ implementation of Kosaraju’s Algorithm to find the number of SCCs in a directed graph.

📌 Problem Statement

Given the adjacency list of a directed graph, find the number of strongly connected components in the graph.

📝 Notes

Number of vertices V is NOT given

Vertices are labeled from 0 to V-1

V = adj.size()

🔍 Examples
Example 1
Input: adj = [[2,3], [0], [1], [4], []]
Output: 3

Example 2
Input: adj = [[1], [2], [0]]
Output: 1

Example 3
Input: adj = [[1], []]
Output: 2

🧠 Key Idea (Kosaraju’s Algorithm)

Kosaraju’s Algorithm works in three major steps:

1️⃣ Topological Sort using DFS
2️⃣ Reverse all edges of the graph
3️⃣ DFS in stack order on the reversed graph

Each DFS call in step 3 gives one SCC 🎯

⚙️ Algorithm Steps
1. Perform DFS and push nodes into stack by finish time
2. Reverse all edges of the graph
3. Pop nodes from stack
4. For every unvisited node, run DFS on reversed graph
5. Count DFS calls → number of SCCs


⏱️ Time & Space Complexity
Complexity	Value
Time	O(V + E)
Space	O(V + E)
