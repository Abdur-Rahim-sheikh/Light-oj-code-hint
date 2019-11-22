#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f;
int memo[10005];
bool ready[10005];
const int MOD=10000007;
int fn(int n)
{
    if(n==0) return a;
    else if(n==1) return b;
    else if(n==2) return c;
    else if(n==3) return d;
    else if(n==4) return e;
    else if(n==5) return f;
    if(ready[n])return memo[n];
    memo[n] = (fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6))%MOD;
    ready[n]=true;
    return memo[n];
}

int main()
{
    int i=0,j,k,m,n,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&n);
        for(int i=0;i<=n;i++)ready[i]=false;
        printf("Case %d: %d\n",++i,fn(n));
    }
    return 0;
}
