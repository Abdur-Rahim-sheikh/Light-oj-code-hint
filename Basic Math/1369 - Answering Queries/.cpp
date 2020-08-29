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
int main(){
    ll i,j,k,n,m,val,t=0,test,q;
    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--){
        cin>>n>>q;
        ll arr[n],sum=0;
        for(i=0;i<n;i++){
            scanf("%lld",&arr[i]);
            sum+=(n-2*i-1)*arr[i];
        }
        printf("Case %d:\n",++t);
        for(i=0;i<q;i++){
            scanf("%lld",&j);
            if(j)printf("%lld\n",sum);
            else{
                scanf("%lld %lld",&k,&m);
                sum+=(n-2*k-1)*(m-arr[k]);
                arr[k]=m;
            }
        }
        //cout<<endl;
    }
    //free();   //if pointer array
    return 0;
}
