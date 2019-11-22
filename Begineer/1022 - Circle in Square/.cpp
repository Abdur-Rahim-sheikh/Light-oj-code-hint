#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>
#include<cmath>
using namespace std;
#define PI 2*acos(0.0)
int main(){

    int i,j,k,m,n,val,t=0;

    double r,result;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lf",&r);
        result=r*r*(4-PI);
        printf("Case %d: %.2lf\n",i+1,result+1e-9);
    }

    //free();   //if pointer array
    return 0;
}
