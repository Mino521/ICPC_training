# Glorious Brilliance {2 seconds}{64 megabytes}

Professor Zhang is trying to solve one of Karp's 21 NP-complete problems -- \textit{Graph Coloring Problem}.

At first, He generates an undirected graph with $n$ vertices and $m$ edges. Then, he colors all the vertices black or white. Finally, he wants to use the following operation to make the vertices correctly colored: choose two adjacent vertices and swap their colors. The vertices are correctly colored if and only if no two adjacent vertices share the same color.

Professor Zhang wants to know the minimum number of operations needed.

## Input

There are multiple test cases. The first line of input contains an integer $T$, indicating the number of test cases. For each test case:

The first line contains two integers $n$ and $m$ $(2 \le n \le 500, 1 \le m \le \frac{n(n-1)}{2})$ -- the number of vertices and the number of edges. The second line contains a binary string of length $n$. The $i$-the vertex is colored white if the $i$-th character is "0", or black otherwise.

In the next $m$ lines, each contains two integers $x_i$ and $y_i$ $(1 \le x_i, y_i \le n, x_i \ne y_i)$, denoting an undirected edge.

## Output

For each test case, output an integer $s$ denoting the minimum number of operations in the first line. In the next $s$ lines, each contains two integers $x_i$ and $y_i$ $(1 \le x_i, y_i \le n, x_i \ne y_i)$, denoting the $i$-th operation.

If there's no such solution, just output "-1" in a single line.

## Sample input

3
4 4
0011
1 2
2 3
3 4
4 1
2 1
00
1 2
6 7
011001
1 4
1 5
4 2
5 2
5 3
2 6
6 3

## Sample Output

1
4 1
-1
2
2 4
3 5
