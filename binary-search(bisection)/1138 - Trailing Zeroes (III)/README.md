## Key Idea
how to know in n! how much trailing zero exist.
Let's elaborate we are dealing with base 10 so if anything can make 10 that's also generating a trailing zero.

10=2*5 so if we can find out how many 2 and 5 are in n! if n! = p1<sup>e1</sup>p2<sup>e2</sup>....pk<sup>ek</sup><br>
then minimum of number of two and number of five is the answere cause the maximum pair of 2 and 5 is the number of trailing zero.<br>

As we know that number of 2 is always greater or equal to number of 5 so we just need need to know how many number of 5 are there.

Now,<br>
in n! 
there is n/5 amount of number which is divisible by 5<br>
also n/25 amount of number which is divisible by 25 means those number contains double 5 single is counted earlier.<br>
n/125 amount of number which is divisible by 125 means those number contains triple 5, and two of them are counted earlier.<br>

Let's see an example for vivid idea.
Let n=125
so n! = 1*2*....*125
So Here is n/5=25 number divisible by 5 which are<br>
5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 105, 110, 115, 120, 125<br>
and here is n/25=5 number divisible by 25 which are<br>
25, 50, 75, 100, 125<br>

and here is n/125= 1 number divisible by 125 which is<br>
125 itselft which is in form of 5*5*5 

as we counted (25, 50, 75, 100, 125) two time so no 
and as we counted 125 there time all 5 are counted

So number of 5 in n! is <b> n/5 + n/(5 * 5) + n/(5 * 5 * 5) + ..................<br>
