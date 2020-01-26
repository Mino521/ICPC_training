# Helter Skelter {4 seconds}{128 megabytes}

A non-empty string $s$ is called binary, if it consists only of characters "0" and "1". A substring $s[l \dots r]$ $(1 \le l \le r \le |s|)$ of string $s = s_{1}s_{2} \dots s_{|s|}$ (where $|s|$ is the length of string $s$) is string $s_{l}s_{l + 1}...s_{r}$.

Professor Zhang has got a long binary string $s$ starting with "0", and he wants to know whether there is a substring of the string $s$ that the occurrences of "0" and "1" in the substring is exact $a$ and $b$, where $a$ and $b$ are two given numbers.

Since the binary string is very long, we will compress it. The compression method is:
+ Split the string to runs of same characters.
+ Any two adjacent runs consist of different characters. Use the length of each run to represent the string.

For example, the runs of a binary string 00101100011110111101001111111 is \{00, 1, 0, 11, 000, 1111, 0, 1111, 0, 1, 00, 1111111\}, so it will be compressed into \{2, 1, 1, 2, 3, 4, 1, 4, 1, 1, 2, 7\}.

## Input

There are multiple test cases. The first line of input contains an integer $T$, indicating the number of test cases. For each test case:

The first line contains two integers $n$ and $m$ $(1 \le n \le 1000, 1 \le m \le 5 \cdot 10^5)$ - the number of runs and the number of queries. The next line contains $n$ integers: $x_1, x_2, ..., x_n$ $(1 \le x_i \le 10^6)$, indicating the length of the each run.

Each of the following $m$ lines contains two integers $a_i$ and $b_i$ $(0 \le a_i, b_i \le |s|, 1 \le a_i + b_i \le |s|)$, which means Professor Zhang wants to know whether there is a substring of the string $s$ that the occurrences of "0" and "1" in the substring is exact $a_i$ and $b_i$.

## Output

For each test case, a binary string of length $n$. The $i$-th number is "1" if the answer for the $i$-th query is yes, or "0" otherwise.

## Sample input

3
2 3
3 4
3 0
3 4
1 2
3 4
1 2 3
5 1
4 2
1 3
3 2
12 10
2 1 1 2 3 4 1 4 1 1 2 7
2 1
2 2
2 3
2 4
2 5
4 1
4 2
4 3
4 4
4 5

## Sample Output

111
0101
1111101111
