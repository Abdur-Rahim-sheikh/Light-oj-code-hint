#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pdd pair<double,double>
#define x first
#define y second
#define on(val,pos) val|(1<<pos)
#define off(val,pos) val&(~(1<<pos))
#define check(val,pos) (bool)val&(1<<pos)
using namespace std;
pdd arr[4],a,b;
double dist(pdd a,pdd b,double portion){
    a.x=arr[0].x + a.x*portion;
    a.y=arr[0].y + a.y*portion;

    b.x=arr[2].x + b.x*portion;
    b.y=arr[2].y + b.y*portion;
    return  sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));

}
double ternary(){
    a.x=arr[1].x-arr[0].x;
    a.y=arr[1].y-arr[0].y;
    b.x=arr[3].x-arr[2].x;
    b.y=arr[3].y-arr[2].y;
    int cnt=200;
    double hi=1.0,lo=0,left,right;
    double ans1,ans2;
    while(cnt--){
        left=(2*lo+hi)/3;
        right=(lo+ 2*hi)/3;
        ans1= dist(a,b,left);
        ans2=dist(a,b,right);
        if(ans1<ans2)hi=right;
        else lo=left;
    }
    return min(ans1,ans2);
}
int main(){

    int i,j,k,m,n,val,t=0,cnt,test;
    //freopen("000input.txt","r",stdin);
    cin>>test;

    while(test--){
        for(i=0;i<4;i++)scanf("%lf %lf",&arr[i].x,&arr[i].y);
        printf("Case %d: %0.7lf\n",++t,ternary());
    }

    //free();   //if pointer array
    return 0;
}
