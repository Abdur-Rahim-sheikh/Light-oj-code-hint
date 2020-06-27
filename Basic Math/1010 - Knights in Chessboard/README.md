## Key Idea
<b>If you don't know about chess or specifically knight move google it</b><br>
Break through of this problem is we know that the next move of a knight is always a different color.<b>If you got the idea stop reading and give a second try</b><br>

So for a standard chess board maximum of (8 * 8) / 2 = 32 knight can be placed in the same color cell white or black.<br>
So the math is simple (m*n)/2 is the solution. But as in the solution the board is customized so the board area can be odd as(7 * 9) If we place color in the board
one of the color will be one extra then other. And we will take that color to maximize the knight amount. So the equation concludes to (m * n + 1) / 2.

<b>But there is two special case :</b><br>
1) If the board is in shape of (1 * m) or (n * 1) then every cell is valid place as knight does not move vertically or horizontally<br>
2) If the board is in shape of (2 * m) or (n * 2) then keeping the knight as group of 4 is efficient idea.
 as left 4 cell is filled then 4 cell empty then 4cell filled and so on.............. <b> build the equation for this special case</b>:wink:
