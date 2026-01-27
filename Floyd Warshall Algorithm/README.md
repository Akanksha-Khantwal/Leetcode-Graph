🌐 Floyd–Warshall Algorithm | All-Pairs Shortest Path
<p align="center"> <img src="https://img.shields.io/badge/Algorithm-Floyd--Warshall-blueviolet?style=for-the-badge"/> <img src="https://img.shields.io/badge/Graph-All--Pairs%20Shortest%20Path-success?style=for-the-badge"/> <img src="https://img.shields.io/badge/Language-C++-orange?style=for-the-badge"/> </p>
✨ Overview

The Floyd–Warshall Algorithm is a powerful dynamic programming technique used to find the shortest paths between all pairs of vertices in a weighted graph.

✔️ Handles negative edge weights
✔️ Works for directed & undirected graphs
❌ Not suitable for very large graphs due to high complexity

🧠 Core Idea (In Simple Words)

Try every vertex as an intermediate node and update the shortest distance between every pair.

If going from i → k → j is shorter than i → j, update it.

🔄 Algorithm Steps

Convert unreachable paths (1e8) to INT_MAX

Pick each node as an intermediate (k)

Update distances using:

dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

Ignore paths involving INT_MAX

Convert INT_MAX back to 1e8 (as required by GFG)


📊 Example

Input Matrix

0   5   INF  10
INF 0   3    INF
INF INF 0    1
INF INF INF  0

Output Matrix

0   5   8   9
INF 0   3   4
INF INF 0   1
INF INF INF 0
⏱️ Complexity Analysis
Metric	Value
Time Complexity	O(V³)
Space Complexity	O(V²)
🧩 When to Use Floyd–Warshall?

✅ Need shortest path between every pair
✅ Graph size is small (≤ 400 nodes)
✅ Negative edges allowed

❌ Avoid for large graphs (too slow)

🔥 Interview Notes

Floyd–Warshall ≠ Dijkstra

Detect negative cycles by checking dist[i][i] < 0

Based on Dynamic Programming
