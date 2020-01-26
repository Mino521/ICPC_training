# Born Slippy {5 seconds}{256 megabytes}

Professor Zhang has a rooted tree, whose vertices are conveniently labeled by $1,2,...,n$. And the $i$-th vertex is assigned with weight $w_i$.

For each $s \in \{1,2,...,n\}$, Professor Zhang wants find a sequence of vertices $v_1,v_2,...,v_m$ such that:

+ $v_1=s$ and $v_i$ is the ancestor of $v_{i-1}$ $(1 < i \le m)$.
+ the value $f(s)=w_{v_1}+\sum\limits_{i=2}^{m}w_{v_i} \text{ opt } w_{v_{i-1}}$ is maximum. Operation $x \text{ opt } y$ denotes bitwise AND, OR or XOR operation of two numbers.

## Input

There are multiple test cases. The first line of input contains an integer $T$, indicating the number of test cases. For each test case:

The first line contains an integer $n$ and a string $opt$ $(2 \le n \le 2^{16}, opt \in \{\text{AND}, \text{OR}, \text{XOR}\}$) -- the number of vertices and the operation. The second line contains $n$ integers $w_1,w_2,...,w_n$ $(0 \le w_i < 2^{16})$. The thrid line contain $n-1$ integers $f_2,f_3,...,f_n$ $(1 \le f_i < i)$, where $f_i$ is the father of vertex $i$.

There are about $300$ test cases and the sum of $n$ in all the test cases is no more than $10^6$.

## Output

For each test case, output an integer $S=(\sum\limits_{i=1}^{n}{i \cdot f(i)}) \text{ mod } (10^9 + 7)$.

## Sample Input

3
5 AND
5 4 3 2 1
1 2 2 4
5 XOR
5 4 3 2 1
1 2 2 4
5 OR
5 4 3 2 1
1 2 2 4

## Sample Output

91
139
195
