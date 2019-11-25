#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#define ll long long
#define PI 2*acos(0.0)
using namespace std;

int main()
{

    int i,j,k,m,n,val,t=0,test,R,r,H,p;
    double Rp;
    scanf("%d",&test);
    while(test--){
        scanf("%d %d %d %d",&R,&r,&H,&p);
        Rp=r+((R-r)*p)/(H*1.00);

        double volume=(PI*p/3.00)*(Rp*Rp+Rp*r+r*r);
        printf("Case %d: %0.8lf\n",++t,volume);
    }

    //free();   //if pointer array
    return 0;
}
