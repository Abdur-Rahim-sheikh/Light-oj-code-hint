#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{

    long long  i,j,k,m,n,val,t=0,test;
    long long ax,ay,bx,by,cx,cy,dx,dy,area;
    cin>>test;
    while(test--){
        scanf("%lld %lld %lld %lld %lld %lld",&ax,&ay,&bx,&by,&cx,&cy);
        dx=ax+cx-bx;     //2*(a+e)/2-c;middle point of twice corner is same
        dy=ay+cy-by;

        ///area=sqrt(((a-c)*(a-c))+((b-d)*(b-d))) * sqrt(((c-e)*(c-e))+((d-f)*(d-f))); it's error is more then the next one.
        area=abs((ax*by+bx*cy+cx*dy+dx*ay)-(ay*bx+by*cx+cy*dx+dy*ax))/2;
        printf("Case %lld: %lld %lld %lld\n",++t,dx,dy,area);
    }

    //free();   //if pointer array
    return 0;
}
