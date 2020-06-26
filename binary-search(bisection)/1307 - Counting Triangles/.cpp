#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<queue>
#include<map>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
using namespace std;
bool big(int a,int b){return a>b;}
int main()
{

    int i,j,k,m,n,val,t=0,cnt=0,test,sum=0;
    int arr[2005];
    cin>>test;
    while(test--){
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&arr[i]);
        sort(arr,arr+n,big);

        for(i=0,sum=0;i<n-2;i++){
            for(j=i+1;j<n-1;j++){
                int mini=j+1,maxi=n-1,mid;
                while(mini<=maxi){
                        mid=(mini+maxi)/2;
                    if(arr[i]<arr[j]+arr[mid] && (arr[i]>=arr[j]+arr[mid+1]|| mid+1==n))break;
                    else if(arr[i]>=arr[j]+arr[mid])maxi=mid-1;
                    else mini=mid+1;
                }

                if(mini<=maxi)sum+=(mid-j);
            }
        }
        printf("Case %d: %d\n",++t,sum);
    }

    //free();   //if pointer array
    return 0;
}
