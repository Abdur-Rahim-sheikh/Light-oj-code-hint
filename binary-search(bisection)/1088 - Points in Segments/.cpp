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
int arr[100005],n;
int bin_search(int val){
    int lo=0,hi=n-1,mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(arr[mid]<=val and (mid+1==n or arr[mid+1]>val))break;
        else if(arr[mid]<=val)lo=mid+1;
        else hi=mid-1;
    }
    if(lo>hi)return 0;
    else return mid+1;
}
int main()
{
    int i,j,k,m,t=0,cnt,test,a,b;

    cin>>test;
    while(test--){
        scanf("%d %d",&n,&m);

        printf("Case %d:\n",++t);
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);//input given in ascending order
        }

        for(i=0;i<m;i++){
            scanf("%d %d",&a,&b);
            printf("%d\n",bin_search(b)-bin_search(a-1));
        }
    }
    //free();   //if pointer array
    return 0;
}
