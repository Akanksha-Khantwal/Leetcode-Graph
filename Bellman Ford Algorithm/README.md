🚀 Bellman–Ford Algorithm | C++ | GeeksforGeeks
<p align="center"> <img src="https://img.shields.io/badge/Algorithm-Bellman--Ford-blue?style=for-the-badge"/> <img src="https://img.shields.io/badge/Language-C++-orange?style=for-the-badge"/> <img src="https://img.shields.io/badge/Graph-Shortest%20Path-success?style=for-the-badge"/> </p>
🌟 About the Problem

The Bellman–Ford Algorithm is used to find the shortest path from a single source vertex to all other vertices in a weighted directed graph.

🔴 Unlike Dijkstra’s Algorithm, Bellman–Ford can:

Handle negative edge weights

Detect negative weight cycles

This makes it extremely important for competitive programming, interviews, and exam questions.

🧠 Key Idea (In Simple Words)

Keep relaxing all edges again and again until the shortest distance is found.
Relax all edges V − 1 times
Run one extra pass to detect negative cycles
If distances still reduce → ❌ Negative Cycle Exists

✨ Features of This Solution

✅ Handles negative edge weights
✅ Detects negative weight cycles
✅ Optimized with early stopping
✅ Clean & readable C++ code
✅ Matches GeeksforGeeks function template

🛠️ Algorithm Steps

Initialize distance array with infinity

Set source distance = 0

Relax all edges V - 1 times

Stop early if no update occurs

Perform one extra relaxation to check for negative cycles

Return result or {-1} if a cycle is found

⏱️ Complexity Analysis
Metric	Value
Time Complexity	O(V × E)
Space Complexity	O(V)

📌 Example

Input

V = 5
edges = {{0,1,-1},{0,2,4},{1,2,3},{1,3,2},{1,4,2},{3,2,5},{3,1,1},{4,3,-3}}
src = 0

Output

0 -1 2 -2 1
🎯 When to Use Bellman–Ford?

✔️ Graph has negative edges
✔️ Need to detect negative cycles
❌ Not suitable for very large graphs (slow compared to Dijkstra)

