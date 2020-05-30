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

    int i,j,k,m,n,val,t=0,cnt=0,test;
    double x,y,h,d,A,B,area;
    cin>>test;
    while(test--){
        scanf("%lf %lf %lf",&x,&y,&h);
        int iterate=205;
        double mini=0,maxi=min(x,y);
        while(iterate--){
            d=(mini+maxi)/2;
            A=acos(d/x);
            B=acos(d/y);
            ///ASA(angle side angle area) area=(a*a*sin(A)*sin(B))/sin(C)  =>C=180-(A+B)

            area=(d*d*sin(A)*sin(B))/(2*sin(PI-(A+B)));

            ///cout<<area<<' '<<d<<' '<<0.5*d*h<<' '<<d/y<<endl;
            if(area<=(0.5*h*d))maxi=d;
            else mini=d;
        }
        printf("Case %d: %0.8lf\n",++t,d);
        ///cout<<d<<endl;
    }

    //free();   //if pointer array
    return 0;
}
