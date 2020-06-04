#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<queue>
#include<map>
#define INF 10000000005
#define ll long long
#define PI 2*acos(0.0)
using namespace std;
ll trailing_zeros(ll x){
    ll fives_product=5,sum=0;
    while(x/fives_product!=0){
        sum+=x/fives_product;
        fives_product*=5;
    }
    return sum;
}
int main(){
    ll i,j,k,m,n,val,t=0,test,sum;
    cin>>test;
    while(test--){
        scanf("%lld",&n);
        ll mini=5,maxi=INF,mid;
        while(mini<=maxi){
            mid=(mini+maxi)/2;
            mid=mid-mid%5;
            sum=trailing_zeros(mid);
            if(sum==n)break;
            else if(sum<n)mini=mid+5;
            else maxi=mid-5;
        }
        if(mini>maxi)printf("Case %lld: impossible\n",++t);
        else printf("Case %lld: %lld\n",++t,mid);
    }

    //free();   //if pointer array
    return 0;
}
