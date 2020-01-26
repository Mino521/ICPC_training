# Eureka {3 seconds}{64 megabytes}

Professor Zhang draws $n$ points on the plane, which are conveniently labeled by $1, 2, ..., n$. The $i$-th point is at $(x_i,y_i)$. Professor Zhang wants to know the number of best sets. As the value could be very large, print it modulo $10^9+7$.

A set $P$ ($P$ contains the label of the points) is called best set if and only if there are at least one best pair in $P$. Two numbers $u$ and $v$ $(u, v \in P, u \ne v)$ are called best pair, if for every $w \in P$, $f(u,v) \ge g(u,v,w)$, where $f(u,v)=\sqrt{(x_u-x_v)^2+(y_u-y_v)^2}$ and $g(u,v,w)=\frac{f(u,v)+f(v,w)+f(w,u)}{2}$.

## Input

There are multiple test cases. The first line of input contains an integer $T$, indicating the number of test cases. For each test case:

The first line contains an integer $n$ $(1 \le n \le 1000)$ -- then number of points.

Each of the following $n$ lines contains two integers $x_i$ and $y_i$ $(-10^9 \le x_i, y_i \le 10^9)$ -- coordinates of the $i$-th point.

## Output

For each test case, output an integer denoting the answer.

## Sample input

3
3
1 1
1 1
1 1
3
0 0
0 1
1 0
1
0 0

## Sample Output

4
3
0
