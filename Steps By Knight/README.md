♞ Knight Walk – Minimum Steps (BFS)

“Move like a Knight, think like BFS.”
A classic graph traversal problem solved efficiently using Breadth First Search.

📌 Problem Statement

You are given an N × N chessboard.
A Knight is placed at a starting position and must reach a target position in the minimum number of moves.

♟ Knight’s Movement

A knight can move in 8 possible directions:

2 steps in one direction + 1 step perpendicular

🎯 Objective

Find the minimum number of steps required for the knight to reach the target position.

If it is not possible, return -1.

🧠 Key Insight

Each cell of the chessboard acts like a node

Each knight move is an edge

Since all moves have equal cost → BFS guarantees the shortest path

🧩 Approach (BFS Strategy)

Convert positions to 0-based indexing
Use a queue to perform BFS (level-order traversal)
Maintain a visited matrix to avoid revisiting cells
Explore all 8 knight moves from the current position
Each BFS level represents one knight move
Stop immediately when the target is reached

♞ Knight Move Directions
(-2,-1) (-2, 1)
(-1,-2) (-1, 2)
( 1,-2) ( 1, 2)
( 2,-1) ( 2, 1)

🧪 Example
Input
N = 6
Knight = (4, 5)
Target = (1, 1)
Output
3
⏱️ Complexity Analysis
Metric	Value
Time Complexity	O(N²)
Space Complexity	O(N²)
