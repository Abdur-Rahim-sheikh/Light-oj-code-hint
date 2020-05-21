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
    int i,j,k,m,n,t=0,cnt=0,test;
    double a1,b1,r,theta,arcDist,a,b;
    cin>>test;
    while(test--){
        scanf("%lf %*c %lf",&a,&b);
        int iterate=200;
        double mini=0,maxi=205,mid;
        while(iterate--){
            mid=(mini+maxi)/2;
            a1=a*mid;
            b1=b*mid;
            r=sqrt(a1*a1+b1*b1)/2;
            theta=acos((2*r*r-b1*b1)/(2*r*r));
            arcDist=theta*r;
            if(2*(arcDist+a1)<400)mini=mid;
            else maxi=mid;
        }
        ///cout<<a1<<' '<<b1<<endl;
       printf("Case %d: %0.8lf %0.8lf\n",++t,a1,b1);
    }

    //free();   //if pointer array
    return 0;
}
