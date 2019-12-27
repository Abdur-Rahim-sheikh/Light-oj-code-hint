#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>
using namespace std;
/*-1-2-3+4+5+6-7-8-9+10+11+12
then it proves that m*m*(n/2m)=m*n/2=the summition
*/
int main()
{
    long long i,j,k,m,n,val,t=0,test;
    cin>>test;
    while(test--)
    {
        scanf("%lld %lld",&n,&k);
        printf("Case %lld: %lld\n",++t,(k*n)/2);
    }
    //free();   //if pointer array
    return 0;
}
