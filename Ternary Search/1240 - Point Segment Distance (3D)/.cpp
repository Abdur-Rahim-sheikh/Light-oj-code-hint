#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define PI (2*acos(0.0))
#define Hare printf("here\n")
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define x first
#define y second
#define on(val,pos) val|(1<<pos)
#define off(val,pos) val&(~(1<<pos))
#define check(val,pos) (val&(1<<pos))

//first four adjacent,second four corner
//int row[8]={0,-1,0,1,1,-1,-1,1};
//int col[8]={-1,0,1,0,-1,-1,1,1};
using namespace std;
struct point{
    double x,y,z;
}ar[2],dest;
point get(point a,point b){
    point tem;
    tem.x=(a.x*2+b.x)/3;
    tem.y=(a.y*2+b.y)/3;
    tem.z=(a.z*2+b.z)/3;
    return tem;
}
double dist(point tem){
    double ans= (tem.x-dest.x)*(tem.x-dest.x);
    ans+=(tem.y-dest.y)*(tem.y-dest.y);
    ans+=(tem.z-dest.z)*(tem.z-dest.z);
    return ans;
}
double ternary(){
    point left,right;
    int cnt=200;
    double ans1,ans2;
    while(cnt--){
        left = get(ar[0],ar[1]);
        right = get(ar[1],ar[0]);
        ans1 =dist(left);
        ans2=dist(right);
        if(ans1>ans2)ar[0]=left;
        else ar[1]=right;

    }
    return sqrt(min(ans1,ans2));

}
int main(){
    int i,j,k,n,m,val,t=0,cnt,test;
    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--){
        cin>>ar[0].x>>ar[0].y>>ar[0].z;
        cin>>ar[1].x>>ar[1].y>>ar[1].z;
        cin>>dest.x>>dest.y>>dest.z;
        printf("Case %d: %0.7lf\n",++t,ternary());
    }
    //free();   //if pointer array
    return 0;
}
