#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>
using namespace std;
long long factorials[100]={1};
void factorial(long long n);
int main()
{

    long long i,j,k,m,n,sum,t=0,arr[30],test;
    factorial(19);
    scanf("%lld",&test);
    for(i=0;i<test;i++){
        scanf("%lld",&n);
        for(j=19,sum=0,k=0;j>=0;j--){
            sum=sum+factorials[j];
            if(sum>n)
                sum-=factorials[j];
           else if(sum==n){
                arr[k++]=j;

                break;
           }

            else{
                arr[k++]=j;

            }
        }
        if(sum!=n) printf("Case %lld: impossible\n",i+1);
        else{
                printf("Case %lld: %lld!",i+1,arr[k-1]);
            for(j=k-2;j>=0;j--) printf("+%lld!",arr[j]);

            printf("\n");
        }
    }
    //free();   //if pointer array
    return 0;
}
void factorial(long long n)
{
    long long i,j;
    for(i=1;i<=n;i++){
        factorials[i]=factorials[i-1]*i;
    }
    return;
}
