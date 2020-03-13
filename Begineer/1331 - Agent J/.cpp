#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>

#define PI 2*acos(0.0)
using namespace std;

int main()
{

    int i,j,k,m,n,val,t=0,test;
    double a,b,c,ab,bc,ca;
    double A,B,C,area,left,s;
    cin>>test;
    while(test--){
        scanf("%lf %lf %lf",&a,&b,&c);

        ab=a+b; bc=b+c; ca=c+a;
        s=(ab+bc+ca)/2;
			area=sqrt(s*(s-ab)*(s-bc)*(s-ca));
			A=acos((ca*ca+ab*ab-bc*bc)/(2*ab*ca));
			B=acos((bc*bc+ab*ab-ca*ca)/(2*bc*ab));
			C=acos((bc*bc+ca*ca-ab*ab)/(2*bc*ca));
      
			//areaA=A*PI*a*a/360;
			left=area-(A*a*a+B*b*b+C*c*c)*0.5;
            printf("Case %d: %.8lf\n",++t,left);
    }

    //free();   //if pointer array
    return 0;
}
