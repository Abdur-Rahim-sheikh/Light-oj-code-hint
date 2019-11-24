#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>
using namespace std;
#define SWAP(a,b) { \
                    a^=b;\
                    b^=a;\
                    a^=b;\
}
int main()
{

    long long i,j,k,m,n,val,t=0,test,rem;

    string lrgval;
    scanf("%lld",&test);
    for(i=0;i<test;i++)
    {
        cin>>lrgval>>n;
        n=abs(n);
        m=lrgval.length();
        j=(lrgval[0]=='-')?1:0;
        for(rem=0;j<m;j++){

            val=rem+lrgval[j]-'0';
            rem=(val%n)*10;
        }
        if(rem==0) printf("Case %lld: divisible\n",i+1);
        else printf("Case %lld: not divisible\n",i+1);
    }
    //free();   //if pointer array
    return 0;
}
