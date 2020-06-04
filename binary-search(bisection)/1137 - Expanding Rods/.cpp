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
    double l,degree,s,c,result,assumed_l;
    cin>>test;

    /** the problem set says that there is a chord(jay) and a s which equal r*theta of the circle
    so we assume a theta every time and try to match if its true or not using bisection
    for details (problem i faced in logic)
    */
    while(test--){
        scanf("%lf %lf %lf",&l,&degree,&c);
        s=(1+degree*c)*l;
        if(l==0 || c==0 || degree==0)printf("Case %d: 0\n",++t);
        else{
            double mini=0,maxi=2*PI,theta,r;
            int iterate=250;
            while(iterate--){
                theta = (mini+maxi)/2;
                r=s/theta;              ///a^2=b^2+c^2-2b*c*cos(theta) if b==c then 2b*b(1-cos(theta))
                assumed_l=sqrt(2*r*r*(1-cos(theta)));
                if(assumed_l==l)break;
                else if(assumed_l>l)mini=theta;
                else maxi=theta;
            }
            double d;
            d=sqrt(r*r-l*l/4.00);
            ///cout<<r-d<<endl;
            printf("Case %d: %0.8lf\n",++t,r-d);
        }
    }

    //free();   //if pointer array
    return 0;
}
