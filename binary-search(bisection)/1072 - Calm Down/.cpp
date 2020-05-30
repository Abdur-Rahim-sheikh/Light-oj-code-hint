#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#define ll long long
#define PI 2*acos(0.0)
using namespace std;

int main()
{
    int i,j,k,m,n,t=0,test;
    double r,R;
    cin>>test;
    while(test--){
        scanf("%lf %d",&R,&n);
        r=(R*sin(PI/n)/(1+sin(PI/n)));
        printf("Case %d: %0.10lf\n",++t,r);
    }
    //free();   //if pointer array
    return 0;
}
