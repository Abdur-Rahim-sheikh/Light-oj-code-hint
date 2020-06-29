## Key Idea
Understanding the characteristics of modulo is the fact of the problem.
Example:
1111111=1000000 + 100000 + 10000 + 1000 + 100 + 10 + 1
Now 1111111%k = (1000000%k + 100000%k + 10000%k + 1000%k + 100%k + 10%k + 1%k)%k

Now taking one instance from right side like 100000%k= ((10000%k)+10)%k
hope you understand the fact is if k = a * b * c = x + y + z
then k%p = (a%p * b%p * c%p)%p = (x%p + y%p + z%p)%p

So we will check every number (increase 1 digit at each iteration )which containg only the specific digit and if number is bigger
then mod value we will shrink it down using module property.<br>
Then at a certain point the mod value will be zero then the number of iteration is the length of the value.
