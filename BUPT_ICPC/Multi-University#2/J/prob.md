# Join The Future {4 seconds}{64 megabytes}

Professor Zhang has an array of $n$ integers. He writes down some observations about the array on the paper. Each observation is described by three integers $l_i$, $r_i$ and $s_i$, which means that the sum of elements modulo 2 on interval $[l_i, r_i]$ of the array is equal to $s_i$.

After that, He tries to recover the array only using the above observations. Apparently, there are many such array. So, Professor Zhang decides to limits the lower bound and upper bound of each integer in the array.

Given the observations, the lower bounds and the upper bounds, find the number of possible arrays and the lexicographically smallest array.

## Input

There are multiple test cases. The first line of input contains an integer $T$, indicating the number of test cases. For each test case:

The first line contains two integers $n$ and $m$ $(1 \le n \le 40, 0 \le m \le \frac{n(n+1)}{2})$ -- the length off array and the number of observations.

Each of the next $n$ lines contains two integers $x_i$ and $y_i$ $(0 \le x_i \le y_i \le 10^9)$ -- the lower bound and upper bound of the $i$-th integer.

Each of the next $m$ lines contains three integers $l_i$, $r_i$ and $s_i$ $(1 \le l_i \le r_i \le n, 0 \le s_i \le 1)$ denoting the $i$-th observation.

## Output

For each case, output the number of possible arrays in the first line. As the value could be very large, print it modulo $10^9 + 7$. Then, output the lexicographically smallest array in the second line. If the number of possible arrays equals to zero, just output "-1" (without the quotes) in the second line.

## Sample input

3
3 3
1 10
0 21
3 15
2 2 1
3 3 0
2 3 1
3 0
0 1
1 3
3 4
3 3
1 10
0 21
3 3
2 2 1
3 3 0
2 3 1

## Sample Output

660
1 1 4
12
0 1 3
0
-1
