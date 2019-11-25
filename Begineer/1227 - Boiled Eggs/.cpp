#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,k,m,n,val,t=0,test,arr[1000],sum;

    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%d %d %d",&n,&k,&m);
        for(j=0;j<n;j++) scanf("%d",&arr[j]);
        sort(arr,arr+n);
        for(j=0,sum=0;j<k && j<n;j++){
             sum+=arr[j];
             if(sum>m) break;
        }
        printf("Case %d: %d\n",++t,j);
    }
    //free();   //if pointer array
    return 0;
}
