🚀 Dijkstra’s Algorithm (Shortest Path)

📌 Problem Description

Given a weighted graph with V vertices and E edges, find the shortest distance from a given source vertex to all other vertices using Dijkstra’s Algorithm.

The graph contains non-negative edge weights

If a vertex is not reachable, its distance remains INT_MAX

🧠 Approach Used

Dijkstra’s Algorithm works on the greedy principle:

🔹 Steps:

Convert the given edge list into an adjacency list

Use a min-heap (priority queue) to always pick the node with the shortest distance

Maintain a distance array to store the shortest distance from the source

Mark nodes as visited once finalized

Relax edges to update distances

🛠️ Data Structures Used

vector<vector<pair<int,int>>> → adjacency list

priority_queue (min-heap)

vector<int> → distance array

vector<bool> → visited / explored array


⏱️ Complexity Analysis
Complexity Type	Value
Time Complexity	O((V + E) log V)
Space Complexity	O(V + E)
📊 Example

Input

V = 3
edges = [[0,1,1], [1,2,3], [0,2,6]]
src = 0

Output

0 1 4
