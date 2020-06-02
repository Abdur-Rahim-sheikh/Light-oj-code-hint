#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<set>
#include<queue>
#include<map>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
using namespace std;

int main()
{

    ll i,j,k,m,n,val,t=0,cnt,test,a,b,lvalue,rvalue;

    cin>>test;
    while(test--){
        scanf("%lld %lld",&n,&m);
        ll arr[n+5];

        printf("Case %lld:\n",++t);
        for(i=0;i<n;i++){
            scanf("%lld",&arr[i]);

        }

        for(i=0;i<m;i++){
            scanf("%lld %lld",&a,&b);

            ll left=0,right=n-1,mid;
            while(left<=right){
                mid =(left+right)/2;
                if(arr[mid]<a && arr[mid+1]>=a)break;
                else if(arr[mid]<a)left= mid+1;
                else right = mid-1;
            }
            lvalue = mid+1;
            if(left>right)lvalue = 0;

            if(left>right && mid == right){
                printf("0\n");

            }

            else{
                left=0,right=n-1,mid;
                while(left<=right){
                    mid =(left+right)/2;
                    if(arr[mid+1]>b && arr[mid]<=b)break;
                    else if(arr[mid]<b)left= mid+1;
                    else right = mid-1;
                }
                rvalue =mid+1;

                printf("%lld\n",rvalue-lvalue);
            }


        }

    }
    //free();   //if pointer array
    return 0;
}
