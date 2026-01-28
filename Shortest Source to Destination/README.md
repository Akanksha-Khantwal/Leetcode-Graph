🚀 Shortest Source to Destination Path (BFS)

Efficient solution to find the shortest path in a binary matrix using Breadth First Search (BFS)

📌 Problem Overview

You are given a binary matrix of size N x M where:

1 → Cell is walkable

0 → Cell is blocked

Starting from source cell (0,0), your task is to find the shortest distance to reach the destination cell (X,Y) by moving in 4 directions:

Up

Down

Left

Right

If the destination cannot be reached, return -1.

🧠 Key Idea

Since all moves have equal cost, Breadth First Search (BFS) guarantees the shortest path.

We use:

A queue to explore level by level

A visited matrix to avoid revisiting cells

Direction arrays to simplify movement

🧩 Approach (Step-by-Step)

Edge Case Checks
If source (0,0) or destination (X,Y) is blocked → return -1
If source is destination → return 0
Initialize BFS
Push (0,0) into queue with distance = 0
Mark source as visited
Explore Neighbors
Move in 4 directions
Check bounds, walkable cell, and unvisited
Stop Early
As soon as destination is reached → return distance

🧪 Example
Input Matrix
1 1 1
0 1 0
1 1 1
Destination
(X, Y) = (2, 2)
Output
4
⏱️ Complexity Analysis
Metric	Value
Time Complexity	O(N × M)
Space Complexity	O(N × M)
