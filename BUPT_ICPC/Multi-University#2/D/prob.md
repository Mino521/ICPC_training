# Differencia {6 seconds}{256 megabytes}

Professor Zhang has two sequences $a_1,a_2,...,a_n$ and $b_1,b_2,...,b_n$. He wants to perform two kinds of operations on the sequences:

+ \+ $l$ $r$ $x$: set $a_i$ to $x$ for all $l \le i \le r$.
+ ? $l$ $r$: find the number of $i$ such that $a_i \ge b_i$ and $l \le i \le r$.

## Input

There are multiple test cases. The first line of input contains an integer $T$, indicating the number of test cases. For each test case:

The first line contains four integers $n$, $m$, $A$ and $B$ $(1 \le n \le 10^5, 1 \le m \le 3000000, 1 \le A, B \le 2^{16})$ -- the length of the sequence, the number of operations and two parameters.

The second line contains $n$ integers $a_1, a_2, ..., a_n$ $(1 \le a_i \le 10^9)$. The third line contains $n$ integers $b_1, b_2, ..., b_n$ $(1 \le b_i \le 10^9)$. The forth line contains two integers $l_0,r_0,x_0,D$ $(1 \le l_0,r_0,x_0,D \le 10^9)$.

As there are too many operations, the $m$ operations are specified by parameters $A$ and $B$ given to the following generator routine.

```cpp
int a = A, b = B, C = ~(1<<31), M = (1<<16)-1;
int rnd(int last) {
  a = (36969 + (last >> 3)) * (a & M) + (a >> 16);
  b = (18000 + (last >> 3)) * (b & M) + (b >> 16);
  return (C & ((a << 16) + b)) % 1000000000;
}
```

For the $i$-th operation, first call ```rnd(last)``` three times to get $l$, $r$ and $x$ (i.e. ```l = rnd(last) % n + 1, r = rnd(last) % n + 1, x = rnd(last) + 1)```. Then if $l > r$, you should swap their value. And at last, the $i$-th operation is type ?, if $(l+r+x)$ is an even number, or type + otherwise.

Note: $last$ is the answer of the latest type ? operation and assume $last = 0$ at the beginning of each test case.

## Output

For each test case, output an integer $S=(\sum\limits_{i=1}^{m}{i \cdot z_i}) \text{ mod } (10^9 + 7)$, where $z_i$ is the answer for $i$-the query. If the $i$-th query is of type +, then $z_i=0$.

## Sample Input

3
5 10 1 2
5 4 3 2 1
1 2 3 4 5
5 10 3 4
5 4 4 2 1
1 2 3 4 5
5 10 5 6
5 4 5 2 1
1 2 2 4 5

## Sample output

81
88
87
