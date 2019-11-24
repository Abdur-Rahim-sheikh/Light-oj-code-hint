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

    int i,j,k,m,n,val,t=0,test,a,b,c,d;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if((a+b)%2!=(c+d)%2) printf("Case %d: impossible\n",i+1);
        else{
            m=abs(a-c);n=abs(b-d);
            if(m==n && m==0) printf("Case %d: 0\n",i+1);
            else if(m==n) printf("Case %d: 1\n",i+1);
            else printf("Case %d: 2\n",i+1);
        }
    }
    //free();   //if pointer array
    return 0;
}
