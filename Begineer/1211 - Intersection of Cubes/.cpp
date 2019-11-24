#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<queue>
#include<map>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
using namespace std;

int main()
{
    int i,j,k,m,n,val,t=0,test;

    cin>>test;
    while(test--){
        int a[4]={0},b[4]={0},c[4]={0};
        a[3]=b[3]=c[3]=INF;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d %d %d %d %d",&a[0],&b[0],&c[0],&a[1],&b[1],&c[1]);

            if(a[0]>a[2])a[2]=a[0];
            if(b[0]>b[2])b[2]=b[0];
            if(c[0]>c[2])c[2]=c[0];

            if(a[1]<a[3])a[3]=a[1];
            if(b[1]<b[3])b[3]=b[1];
            if(c[1]<c[3])c[3]=c[1];

        }
        int sum=(a[3]-a[2])*(b[3]-b[2])*(c[3]-c[2]);
        if(sum<0)sum=0;
        printf("Case %d: %d\n",++t,sum);
    }
    //free();   //if pointer array
    return 0;
}
