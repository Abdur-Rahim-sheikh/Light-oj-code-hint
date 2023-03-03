#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
     int i,j,k,m,n,rem,previous,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        if(n>10){rem=n-10;n=10;}
        else {rem=0;}
        printf("%d %d\n",rem,n);
    }


    return 0;
}
