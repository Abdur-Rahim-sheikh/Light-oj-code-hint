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

    ll i,j,k,m,n,val,t=0,cnt,test;

    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--){
        cin>>n>>m;
        printf("Case %lld: ",++t);
        if(n==0 || m==0)printf("0\n");
        else{
             ll t=m/(2*n);
             ll ans1=t*(m-t*n);
             ll ans2=(t+1)*(m-(t+1)*n);

             if(ans1<ans2)t++;

             printf("%lld\n",t);
        }
    }
    //free();   //if pointer array
    return 0;
}
