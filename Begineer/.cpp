#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int binary,test,n,i,j,rem;
    scanf("%lld",&test);
    for(i=0; i<test; i++)
    {
        scanf("%lld",&n);
        j=0;
        while(n!=0)
        {
            rem=n%2;
            n=n/2;
            if(rem==1)
            {
                j++;
            }
        }
        if(j%2==0)
        {
            printf("Case %lld: even\n",i+1);

        }
        else
        {
            printf("Case %lld: odd\n",i+1) ;
        }
    }
    return 0;
}
