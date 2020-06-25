## Key Idea
This problem can be solved in two way
1) <b>0-1 knapsack :</b><br>
If we try to solve like knapsack<br>
  Our maximum affordable amount is k=10<sup>9</sup> and coin is n=2 * 18=36 then total time complexity is (n * k)=3.6 * 10<sup>10</sup>
  which need's approximately 360 sec = 6 minute to execute.
 
2) <b>Subset sum :</b><br>
In sense of subset sum <br>
  Our total element in the set is n = 2 * 18 = 36 . Now we can use a coin in two way taking the coin in count or not taking.
  So complexity is 2<sup>36</sup>= 10<sup>10</sup> or if we do some technique like use coin in a sense of not using, using 1 time and using 2 time
  then complexity is 3<sup>18</sup> = 4 * 10<sup>8</sup> So the problem is still out of range.
  
  But in subset sum problem we can use a <b>binary search</b> technique to reduce the complexity into 2 base log.
  
  How we will make all subset sum of half of the coin and then we will make second half as the same process. Then between them we will run a binary search.
  To find if there is any two sum value so that adding them will make exactly the value we require. (For vivid idea check the code)
  
  Now the complexity reduced to 3<sup>9</sup> + 3<sup>9</sup> * log<sub>2</sub>(3<sup>9</sup>) = 2 * 10<sup>5</sup>
  which is apporximately 0.001sec.
  hope you understand.:smile:
