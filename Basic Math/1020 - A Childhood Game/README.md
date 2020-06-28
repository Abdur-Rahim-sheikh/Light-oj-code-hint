## Key Idea
If Bob starts the game who takes last marble wins the game and If Alice start's the the game who take's last marble losses the game 
for Alice we can say that If he start's the game who takes second last marble will win the game. So N marble for Bob works same as N-1 marble for Alice means we will one marble
less when alice starts then both game are same at each point.

Now what is optimal playing that is. optimal playing is if we can stay at winning state or we force our opposite to stay at lossing state. Now question arises what is state?
every number less or equal N which can be aquired through play is a state. At our play each number can be aquired.

Now forget about Bob and Alice imagine I and you are playing and I started the game i just have to know if i play optimally either i can win if i dont then you will win definitely. Cause you also will optimally.
If there is 1 or 2 marble then it's winning state for me cause i will start and take all marble and win. Now if there is a state from where what we do we will go to winnig state only then thats a loosing state.<br>
Below for 7 marble i will describe it elaborately.
<table>
  <tr> <th>Number</th><td> 0</td><td>1 </td><td>2 </td> <td> 3</td><td>4 </td><td>5 </td><td>6 </td><td>7 </td></tr>
  <tr> <th>State Status</th><td> Loss</td> <td>Win</td> <td>Win </td> <td> Loss</td><td>Win </td><td>Win </td><td>Loss </td><td>Win </td></tr>
</table>
