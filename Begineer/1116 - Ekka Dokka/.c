#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int i,j,k,m,n,rem,div,val,previous,sum,sign;

    scanf("%lld",&n);
    for(j=0;j<n;j++)
    {
        scanf("%lld",&val);
        if(val&1) printf("Case %lld: Impossible\n",j+1);
        else{
            sum=1;
            while(val%2!=1){
                val=val/2;
                sum=sum*2;
            }
            printf("Case %lld: %lld %lld\n",j+1,val,sum);
        }
    }
    return 0;
}
