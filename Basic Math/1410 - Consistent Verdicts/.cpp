#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define INF 1073741824
#define ll long long
#define PI (2*acos(0.0))
#define p1(n) printf("showing %d\n",n)
#define p2(m,n) printf("showing %d %d\n",m,n)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define x first
#define y second
#define on(val,pos) val|(1<<pos)
#define off(val,pos) val&(~(1<<pos))
#define check(val,pos) (val&(1<<pos))
#define all(n) n.begin(),n.end()
//first four adjacent,second four corner
//int row[8]={0,-1,0,1,1,-1,-1,1};
//int col[8]={-1,0,1,0,-1,-1,1,1};
using namespace std;
#define pff pair<double,double>
double dist(pff a,pff b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main(){
    int i,j,k,n,m,val,t=0,test;
    //freopen("000input.txt","r",stdin);
    ///If use set or map besides vector it's running complexity will be huge
    /// because of double data type
    cin>>test;
    while(test--){
        cin>>n;
        pff arr[n];
        for(i=0;i<n;i++)scanf("%lf %lf",&arr[i].x,&arr[i].y);
        vector<double> diff;
        int cnt=1;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                diff.pb(dist(arr[i],arr[j]));
            }
        }
        sort(diff.begin(),diff.end());
        printf("Case %d: %d\n",++t,1+distance(diff.begin(),unique(all(diff))));
    }
    //free();   //if pointer array
    return 0;
}
