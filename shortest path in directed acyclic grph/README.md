🚀 Shortest Path in Directed Acyclic Graph (DAG)
📌 Problem Statement

Given a Directed Acyclic Graph (DAG) with V vertices and E edges, where each edge has a weight, find the shortest distance from node 0 to all other nodes.

If a node is not reachable from node 0, return -1 for that node.

🧠 Approach

To find the shortest path efficiently in a DAG, we use:

✅ Key Concepts Used

Topological Sorting

Depth First Search (DFS)

Edge Relaxation

🔍 Steps

Build the adjacency list from the given edges.

Perform Topological Sort using DFS.

Initialize distance array with INT_MAX and set dist[0] = 0.

Relax edges in topological order.

Replace unreachable distances (INT_MAX) with -1.

🛠️ Algorithm

Create adjacency list with (node, weight) pairs.

Perform DFS-based topological sort.

Process nodes in topological order using a stack.

Update shortest distances using relaxation.

Convert unreachable nodes to -1.

⏱️ Complexity Analysis
Type	Complexity
Time Complexity	O(V + E)
Space Complexity	O(V + E)
🧪 Example

Input

V = 6, E = 7
Edges = {{0,1,2},{0,4,1},{4,5,4},{4,2,2},{1,2,3},{2,3,6},{5,3,1}}

Output

0 2 3 6 1 5
