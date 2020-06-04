#include<bits/stdc++.h>
#define INF 107374182400
#define ll long long
#define PI (2*acos(0.0))
#define Hare printf("here\n")
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

//first four adjacent,second four corner
//int row[8]={0,-1,0,1,1,-1,-1,1};
//int col[8]={-1,0,1,0,-1,-1,1,1};
using namespace std;
ll arr[105],total,m;
vector<ll> vec;
ll bin_search(ll sum){
    if(sum<0)return 0;

    ll l=0,r=vec.size()-1,mid;
    while(l<=r){
        mid=(l+r)/2;
        if(vec[mid]<=sum and vec[mid+1]>sum)break;
        else if(vec[mid]>sum)r=mid-1;
        else l=mid+1;
    }

    if(l<=r)return mid+1;
    else return 0;
}
void subset(ll i,ll n,ll sum,bool check=false){
    if(i==n){

        if(check) total+= bin_search(m-sum);
        else vec.pb(sum);
        return;
    }
    subset(i+1,n,sum,check);
    subset(i+1,n,sum+arr[i],check);
}
int main(){
    ll i,j,k,n,val,t=0,cnt,test;
    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--){
        cin>>n>>m;
        vec.clear(),total=0;
        for(i=0;i<n;i++)scanf("%lld",&arr[i]);

        subset(0,n/2,0);
        sort(vec.begin(),vec.end());
        vec.pb(INF);
        subset(n/2,n,0,true);
        printf("Case %lld: %lld\n",++t,total);
    }

    //free();   //if pointer array
    return 0;
}
