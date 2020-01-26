# It's All In The Mind {2 seconds}{64 megabytes}

Professor Zhang has a number sequence $a_1,a_2,...,a_n$. However, the sequence is not complete and some elements are missing. Fortunately, Professor Zhang remembers some attributes of the sequence:

+ For every $i \in \{1,2,...,n\}$, $0 \le a_i \le 100$.
+ The sequence is non-increasing, i.e. $a_1 \ge a_2 \ge ... \ge a_n$.
+ The sum of all elements in the sequence is not zero.

Professor Zhang wants to know the maximum value of $\frac{a_1+a_2}{\sum_{i=1}^{n}{a_i}}$ among all the possible sequences.

## Input

There are multiple test cases. The first line of input contains an integer $T$, indicating the number of test cases. For each test case:

The first contains two integers $n$ and $m$ $(2 \le n \le 100, 0 \le m \le n)$ -- the length of the sequence and the number of known elements.

In the next $m$ lines, each contains two integers $x_i$ and $y_i$ $(1 \le x_i \le n, 0 \le y_i \le 100, x_i < x_{i+1}, y_i \ge y_{i+1})$, indicating that $a_{x_i} = y_i$.

## Output

For each test case, output the answer as an irreducible fraction "$p$/$q$", where $p$, $q$ are integers, $q > 0$.

## Sample Input

2
2 0
3 1
3 1

## Sample Output

1/1
200/201
