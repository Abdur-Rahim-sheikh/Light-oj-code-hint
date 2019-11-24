#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define ll long long
int main()
{
    ll i,j,k,m,n,rem,div,x1,x2,x,y1,y2,y,test;
    scanf("%lld",&test);
    for(i=0;i<test;i++){
        printf("Case %lld:\n",i+1);
        scanf("%lld %lld %lld %lld %lld",&x1,&y1,&x2,&y2,&n);

        for(j=0;j<n;j++){
            scanf("%lld %lld",&x,&y);
            if(x>x1 && x<x2 && y>y1 && y<y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }

    return 0;
}
