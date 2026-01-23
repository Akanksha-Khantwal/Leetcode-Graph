🛸 Alien Dictionary (C++)
🔍 Finding Letter Order Using Graphs & Topological Sort
🌟 Overview

An alien civilization uses the English alphabet, but the order of letters is unknown 🤔
You are given a list of words from their dictionary that is already sorted according to alien rules.

Your mission is to discover the correct character order 🧩.

✅ Return any valid character order

❌ Return an empty string if no valid order exists

🧠 Core Concept

This problem is solved using:

Directed Graphs

Topological Sorting (Kahn’s Algorithm)

Each character becomes a node, and character precedence becomes a directed edge.

🧩 How the Solution Works (Step-by-Step)
1️⃣ Initialize Characters

All unique characters are added with an initial indegree = 0.

2️⃣ Build the Graph

Compare adjacent words:

Find the first mismatching character

Create a directed edge
👉 u → v means u comes before v

3️⃣ Handle Invalid Prefix Case

Example:

["abc", "ab"]


❌ Invalid order → return ""

4️⃣ Apply Topological Sort

Push characters with indegree = 0 into a queue

Remove them one by one and update neighbors

Build the final order

5️⃣ Detect Cycles

If the result length is less than total unique characters,
🚫 a cycle exists → invalid dictionary

🔄 Example
📥 Input
["baa", "abcd", "abca", "cab", "cad"]

📤 Output (one possible)
bdac

🧾 Explanation

Derived rules:

b → d → a → c


⚠️ Edge Cases Covered

Prefix conflicts
Cyclic dependencies
Characters with no dependencies
Multiple valid outputs allowed

⏱️ Complexity Analysis
Metric	Value
Time Complexity	O(N × L)
Space Complexity	O(K)

Where:

N = number of words

L = maximum word length

K = number of unique characters
