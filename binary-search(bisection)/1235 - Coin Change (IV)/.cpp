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
bool possible;
ll sum,target;
vector<ll>money;
ll coin[20];
void make_money(int i,int n,ll sum){
    if(i==n){
        money.pb(sum);
        return;
    }
    make_money(i+1,n,sum);
    make_money(i+1,n,sum+coin[i]);
    make_money(i+1,n,sum+coin[i]*2);
    return;
}

void check_money(int i,int n,ll sum){
    if(i==n){
        ll ans=target-sum;
        if(ans>=0 && binary_search(money.begin(),money.end(),ans))
            possible=true;

        return;
    }
    check_money(i+1,n,sum);
    check_money(i+1,n,sum+coin[i]);
    check_money(i+1,n,sum+coin[i]*2);
    return;

}
int main(){
    ll i,j,k,n,val,t=0,cnt,test;
    ll m;
    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--){
        scanf("%lld %lld",&n,&target);
        possible=false;
        for(i=0;i<n;i++)scanf("%lld",&coin[i]);
        //sort(coin,coin+n);

        make_money(0,n/2,0);

        sort(money.begin(),money.end());

        check_money(n/2,n,0);
        if(possible)printf("Case %lld: Yes\n",++t);
        else printf("Case %lld: No\n",++t);
        money.clear();
    }
    //free();   //if pointer array
    return 0;
}
