#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define on(val,pos) val|(1<<pos)
#define off(val,pos) val&(~(1<<pos))
#define check(val,pos) (bool)val&(1<<pos)
using namespace std;

int main(){

    int i,j,k,m,n,val,t=0,cnt,test;
    double w,l,q,x,ans;
    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--){  ///All are optimized differential equations
        cin>>l>>w;
        q=w+l;
        x=(q-sqrt((q*q)-(3*w*l)))/6;

        ans=(w-2*x)*(l-2*x)*x;
        printf("Case %d: %0.8lf\n",++t,ans);
    }
    //free();   //if pointer array
    return 0;
}
