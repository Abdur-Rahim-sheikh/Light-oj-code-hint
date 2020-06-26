#include<bits/stdc++.h>
#define INF 1073741824
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
#define all(v) v.begin(),v.end()
//first four adjacent,second four corner
//int row[8]={0,-1,0,1,1,-1,-1,1};
//int col[8]={-1,0,1,0,-1,-1,1,1};
using namespace std;
vector<ll> vec,ans;
const ll mx=1e12;
void lucky(ll k){
    if(mx<k)return;

    if(k)vec.pb(k);
    lucky(k*10+4);
    lucky(k*10+7);
    return;
}
void veryLucky(int ind,ll k){
    for(int i=ind;i<vec.size();i++){
        if(k*vec[i]>mx or k*vec[i]<=0)return;
        ans.pb(k*vec[i]);
        veryLucky(i,k*vec[i]);
    }
    return;
}
int main(){
    ll i,j,k,n,m,val,t=0,cnt,test;
    //freopen("000input.txt","r",stdin);
    lucky(0LL);
    sort(all(vec));
    veryLucky(0,1LL);

    sort(all(ans));
    ans.resize(unique(all(ans))-ans.begin());
    cin>>test;
    while(test--){
        cin>>n>>m;
        k=upper_bound(all(ans),m)-ans.begin();
        j=lower_bound(all(ans),n)-ans.begin();

        printf("Case %lld: %lld\n",++t,k-j);
    }
    //free();   //if pointer array
    return 0;
}
