# Call It What You Want {2 seconds}{64 megabytes}

Professor Zhang has heard that the longest path problem cannot be solved in polynomial time for arbitrary graphs unless P = NP. Now, Professor Zhang would like to solve this problem in polynomial time in some graphs.

The longest path problem is the problem of finding a simple path of maximum length in a given graph. A path is called simple if it does not have any repeated vertices. The length of a path is measured by its number of edges on the path.

## Input

There are multiple test cases. The first line of input contains an integer $T$ (about 350), indicating the number of test cases. For each test case:

The first line contains two integers $n$ and $m$ $(3 \le n \le 10^4, n \le m \le n + 4)$ -- the number of vertices and the number of edges.

Each of the following $m$ lines contains two integers $a_i$ and $b_i$ which denotes an edge between vertices $a_i$ and $b_i$ $(1 \le a_i, b_i \le n, a_i \ne b_i)$.

It is guaranteed that the graph is connected and does not contain multiple edges.

## Output

For each test case, output an integer denoting the length of the longest path.

## Sample Input

3
5 5
1 2
2 3
3 4
4 5
5 1
7 7
1 2
2 3
3 4
4 5
5 1
5 6
4 7
7 10
1 2
2 3
3 4
4 5
1 5
2 5
3 5
1 6
5 6
4 7

## Sample Output

4
6
6
