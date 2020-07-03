#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    long long int i,j,n,val;

    scanf("%lld",&n);
    for(j=0;j<n;j++){
        scanf("%lld",&val);
        long long twos=1;
        while(val%2==0)val/=2,twos*=2;
        printf("Case %lld: ",j+1);
        if(twos>1 && val>1)printf("%lld %lld\n",val,twos);
        else printf("Impossible\n");

    }
    return 0;
}
