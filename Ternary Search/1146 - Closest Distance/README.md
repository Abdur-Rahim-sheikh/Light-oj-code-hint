## Key Idea

<b> Ternary search is like binary search but checks ternary (3) statement.</b><br>
Let's come into common point of these two segment in the given problem.
1) At a fixed time they crossed x% distance of there segment. Which is x% horizontaly of total horizontal distance and x% vertically of total vertical distance.
2) Let we crossed x% distance from the start point left distance is y = (1-x%) and we also know that our closest distance lies in the left distance.
  Now if we divide the left distance in two equal portion we will not know that which portion will be more nearer. But if we divide this left distance in 3 equal portion
  and check the two cut point of these portion then we will certainly know that the portion of farthest cut point portion will not be the ans. So as there are three portion 
  left - middle - right. Each dash is a cut point. Now if first cutpoint is greater then second cut point then we are sure that left portion does not carry the closest distance
  Otherwise right portion. Middle portion is black box. Each time we will eleminate right portion or left portion. And then in the next iteration we will try the same process
  for the left portion in which the closest distance lies.<br>
  <b> For vivid idea see the code and draw these segment in graph paper. And simulate the code in the graph for an example</b>
 
