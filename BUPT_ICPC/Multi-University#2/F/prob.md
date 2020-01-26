# Fantasia {4 seconds}{64 megabytes}

Professor Zhang has an undirected graph $G$ with $n$ vertices and $m$ edges. Each vertex is attached with a weight $w_i$. Let $G_i$ be the graph after deleting the $i$-th vertex from graph $G$. Professor Zhang wants to find the weight of $G_1, G_2, ..., G_n$.

The weight of a graph $G$ is defined as follows:

+ If $G$ is connected, then the weight of $G$ is the product of the weight of each vertex in $G$.
+ Otherwise, the weight of $G$ is the sum of the weight of all the connected components of $G$.

A connected component of an undirected graph $G$ is a subgraph in which any two vertices are connected to each other by paths, and which is connected to no additional vertices in $G$.

## Input

There are multiple test cases. The first line of input contains an integer $T$, indicating the number of test cases. For each test case:

The first line contains two integers $n$ and $m$ $(2 \le n \le 10^5, 1 \le m \le 2 \times 10^5)$ -- the number of vertices and the number of edges.

The second line contains $n$ integers $w_1, w_2, ..., w_n$ $(1 \le w_i \le 10^9)$, denoting the weight of each vertex.

In the next m lines, each contains two integers $x_i$ and $y_i$ $(1 \le x_i, y_i \le n, x_i \ne y_i)$, denoting an undirected edge.

There are at most $1000$ test cases and $\sum n, \sum m \le 1.5 \times 10^6$.

## Output

For each test case, output an integer $S = (\sum\limits_{i=1}^{n}i\cdot z_i) \text{ mod } (10^9 + 7)$, where $z_i$ is the weight of $G_i$.

## Sample Input

1
3 2
1 2 3
1 2
2 3

## Sample Output

20
