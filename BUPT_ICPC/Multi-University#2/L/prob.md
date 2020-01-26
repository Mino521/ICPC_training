# La Vie en rose {6 seconds}{64 megabytes}

Professor Zhang would like to solve the multiple pattern matching problem, but he only has only one pattern string $p=p_{1}p_{2}...p_{m}$. So, he wants to generate as many as possible pattern strings from $p$ using the following method:

1. select some indices $i_1,i_2,...,i_k$ such that $1 \le i_1 < i_2 < ... < i_k <|p|$ and $|i_j-i_{j+1}| > 1$ for all $1 \le j < k$.
2. swap $p_{i_j}$ and $p_{i_j+1}$ for all $1 \le j \le k$.

Now, for a given a string $s=s_{1}s_{2}...s_{n}$, Professor Zhang wants to find all occurrences of all the generated patterns in $s$.

## Input

There are multiple test cases. The first line of input contains an integer $T$, indicating the number of test cases. For each test case:

The first line contains two integers $n$ and $m$ $(1 \le n \le 10^5, 1 \le m \le \min\{5000, n\})$ -- the length of $s$ and $p$.

The second line contains the string $s$ and the third line contains the string $p$. Both the strings consist of only lowercase English letters.

## Output

For each test case, output a binary string of length $n$. The $i$-th character is "1" if and only if the substring $s_{i}s_{i+1}...s_{i+m-1}$ is one of the generated patterns.

## Sample input

3
4 1
abac
a
4 2
aaaa
aa
9 3
abcbacacb
abc

## Sample Output

1010
1110
100100100
