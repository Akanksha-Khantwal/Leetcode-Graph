🧭 Find Whether Path Exists in a Grid

A classic Graph + BFS problem where we determine if a valid path exists from Source to Destination by moving in 4 directions.

🚀 Problem Overview

You are given a 2D grid where each cell has a specific meaning:

Cell Value	Meaning
0	Blocked cell ❌
1	Source (Start point) 🟢
2	Destination (End point) 🎯
3	Path cell (Allowed) 🟦
🎯 Goal

Check whether a path exists from Source (1) to Destination (2) by moving only:

⬆ Up

⬇ Down

⬅ Left

➡ Right

🧠 Approach Used

We use Breadth First Search (BFS) because:
BFS explores the grid level by level
It guarantees finding a path if one exists
Perfect for shortest-path & reachability problems

Steps:

Locate source and destination
Push source into a queue
Explore neighbors in 4 directions
Mark visited cells to avoid revisits
Stop when destination is reached

🔁 Direction Handling (Core Logic)
int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};

This allows easy traversal in all 4 directions.

⏱️ Complexity Analysis
Type	Complexity
Time	O(N × M)
Space	O(N × M) (Queue + Visited cells)
🧪 Example
Input Grid
1 3 0
3 3 3
0 3 2
Output
Path Exists ✅
