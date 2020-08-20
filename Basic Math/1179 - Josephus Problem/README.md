## Key Idea
<b> Find out some solution manually and try to find the pattern</b><br>
Let's draw a table for n<=10 and k<=10<br>

<p>$$\begin{array}{ccccccccccc}
n\setminus k &amp; 1 &amp; 2 &amp; 3 &amp; 4 &amp; 5 &amp; 6 &amp; 7 &amp; 8 &amp; 9 &amp; 10 &#92;&#92;
1 &amp; 1 &amp; 1 &amp; 1 &amp; 1 &amp; 1 &amp; 1 &amp; 1 &amp; 1 &amp; 1 &amp; 1 &#92;&#92;
2 &amp; 2 &amp; 1 &amp; 2 &amp; 1 &amp; 2 &amp; 1 &amp; 2 &amp; 1 &amp; 2 &amp; 1 &#92;&#92;
3 &amp; 3 &amp; 3 &amp; 2 &amp; 2 &amp; 1 &amp; 1 &amp; 3 &amp; 3 &amp; 2 &amp; 2 &#92;&#92;
4 &amp; 4 &amp; 1 &amp; 1 &amp; 2 &amp; 2 &amp; 3 &amp; 2 &amp; 3 &amp; 3 &amp; 4 &#92;&#92;
5 &amp; 5 &amp; 3 &amp; 4 &amp; 1 &amp; 2 &amp; 4 &amp; 4 &amp; 1 &amp; 2 &amp; 4 &#92;&#92;
6 &amp; 6 &amp; 5 &amp; 1 &amp; 5 &amp; 1 &amp; 4 &amp; 5 &amp; 3 &amp; 5 &amp; 2 &#92;&#92;
7 &amp; 7 &amp; 7 &amp; 4 &amp; 2 &amp; 6 &amp; 3 &amp; 5 &amp; 4 &amp; 7 &amp; 5 &#92;&#92;
8 &amp; 8 &amp; 1 &amp; 7 &amp; 6 &amp; 3 &amp; 1 &amp; 4 &amp; 4 &amp; 8 &amp; 7 &#92;&#92;
9 &amp; 9 &amp; 3 &amp; 1 &amp; 1 &amp; 8 &amp; 7 &amp; 2 &amp; 3 &amp; 8 &amp; 8 &#92;&#92;
10 &amp; 10 &amp; 5 &amp; 4 &amp; 5 &amp; 3 &amp; 3 &amp; 9 &amp; 1 &amp; 7 &amp; 8 &#92;&#92;
\end{array}$$</p>

this table proves that.
N<sub>n,k</sub> = (N <sub>n-1,k</sub> + k -1)% N + 1

for more detail's [https://cp-algorithms.com/others/josephus_problem.html](click)
