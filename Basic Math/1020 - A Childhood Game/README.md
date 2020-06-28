## Key Idea
<b> Code is too small but understanding is the point</b>

If Bob starts the game who takes last marble wins the game and If Alice start's the the game who take's last marble losses the game 
for Alice we can say that If he start's the game who takes second last marble will win the game. So N marble for Bob works same as N-1 marble for Alice.
Means we will count one marble less when alice starts then both game are same at each point.<br>
So who is unable to take any marble looses.

Now what is optimal playing? <b> optimal playing</b> is if we can stay at winning state or we force our opposite to stay at lossing state each time. Now question arises what is state?
every number less or equal N which can be aquired through play is a state. At our play each number can be aquired.

Now forget about Bob and Alice imagine I and you are playing and I started the game i just have to know if i play optimally either i can win if i dont then you will win definitely. Cause you also will play optimally.
If there is 1 or 2 marble then it's winning state for me cause i will start and take all marble and win. Now if there is a state from where what we do we will go to winnig state only then thats a loosing state.<br>
Below for 7 marble i will describe it elaborately.
<table>
  <tr> <th>Number</th><td> 0</td><td>1 </td><td>2 </td> <td> 3</td><td>4 </td><td>5 </td><td>6 </td><td>7 </td></tr>
  <tr> <th>State Status</th><td> Loss</td> <td>Win</td> <td>Win </td> <td> Loss</td><td>Win </td><td>Win </td><td>Loss </td><td>Win </td></tr>
</table>
<b><u>Elaboration :</u></b><br>
Let's dig what is to be optimal for this problem if From N i can take 1 or 2 marbel so opposite go to lossing state then it's a winning state If i cannot go to any
lossing state (means i have to go to a winnig state) from this state then N is a loosing state (cause in next turn opposite player will play from winning state). 

1) *0* is a lossing state cause i cannot take any marble.
2) *1* is a winning state cause taking 1 marble, i can go to lossing state 0
3) *2* is a winning state cause taking 2 marble, i can go to loosing state 0
4) *3* is a lossing state cause i cannot go to any loosing state.
5) *4* is a winning state cause taking 1 marble, i can go to loosing state 3
6) *5* is a winning state cause taking 2 marble, i can go to loosing state 3
7) *6* is a lossing state cause i cannot go to any loosing state.
8) *7* is a winning state cause taking 1 marble, i can go to loosing state 6

So looking at the cycle of the series we can say that every 3rd number is a lossing state. 
So if N is a multiple of 3 then it's a lossing state otherwise winning state.

So if we are playing and i start the game with N marble where N = 0 (mod 3) then i loss other wise i win. And opposite for you.:wink:
