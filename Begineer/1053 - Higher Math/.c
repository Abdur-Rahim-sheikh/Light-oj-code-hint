#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    long long i,j,k=0,m,test,ara[3],tem;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld %lld %lld",&ara[0],&ara[1],&ara[2]);
        for(i=0;i<3;i++) for(j=i+1;j<3;j++) if(ara[i]<ara[j]){tem=ara[i]; ara[i]=ara[j]; ara[j]=tem;}
        if(ara[0]>=ara[1]+ara[2])
            printf("Case %lld: NO\n",++k);
        else if(ara[0]*ara[0]==(ara[1]*ara[1]+ara[2]*ara[2]))
            printf("Case %lld: yes\n",++k);

        else   printf("Case %lld: no\n",++k);

    }
    return 0;
}
