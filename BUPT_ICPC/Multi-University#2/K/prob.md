# Keep On Movin {3 seconds}{64 megabytes}

Professor Zhang has $n$ kinds of characters and the quantity of the $i$-th character is $a_i$. Professor Zhang wants to use all the characters build several palindromic strings. He also wants to maximize the length of the shortest palindromic string.

For example, there are 4 kinds of characters and the quantity of each character is $\{2,3,2,2\}$. Professor Zhang can build {abbba, cddc}, {aca, bbb, dcd}, or {acdbdca, bb}. The first is the optimal solution where the length of the shortest palindromic string is 4.

## Input

There are multiple test cases. The first line of input contains an integer T, indicating the number of test cases. For each test case:

The first line contains an integer $n$ $(1 \le n \le 10^5)$ -- the number of kinds of characters. The second line contains $n$ integers $a_1,a_2,...,a_n$ $(0 \le a_i \le 10^4)$.

## Output

For each test case, output an integer denoting the answer.

## Sample Input

4
4
1 1 2 4
3
2 2 2
5
1 1 1 1 1
5
1 1 2 2 3

## Sample Output

3
6
1
3
