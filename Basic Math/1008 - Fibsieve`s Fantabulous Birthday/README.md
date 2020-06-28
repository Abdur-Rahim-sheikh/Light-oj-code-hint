## Key Idea
If we try <b>Iterative</b> it will cause TLE because O(n)=10<sup>15</sup><br>
So  <b>Math</b> is way out. If we investigate this 2D grid at every n square area the highest value if n * n and at every similar color  band if n is odd then 
it iterate like down - up - left and if n is even then it iterates left - right - down. we can easily track from the time that in which'th color band the time is standing
then using their characteristic of iterating we can find out the exact row and column all in O(1) complexity.
