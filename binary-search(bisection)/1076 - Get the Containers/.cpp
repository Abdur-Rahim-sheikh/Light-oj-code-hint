#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>

using namespace std;
ll solve(ll big,ll sum,int n, int k,int arr[]);
int main()
{

    int i,j,k,m,n,val,t=0,cnt,test;

    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--)
    {
        scanf("%d %d",&n,&k);
        int arr[n+5];
        ll sum=0,big=0;

        for(i=0; i<n; i++)
            scanf("%d",&arr[i]),sum+=arr[i],big = max(big,(ll)arr[i]);

        if(k>= n)
        {
            printf("Case %d: %lld\n",++t,big);
            continue;
        }
        val = solve(big,sum,n,k,arr);

        printf("Case %d: %d\n",++t,val);
    }

    //free();   //if pointer array
    return 0;
}

ll solve(ll big,ll sum,int n, int k,int arr[])
{

    ll left = big,right = sum,mid,ans,t;
    while(left<=right)
    {
        mid = (left+right)/2;

        t=1;
        sum=0;
        for(int i=0; i<n; i++)
        {
            if(sum+arr[i]>mid)
            {
                sum=0;
                t++;
            }
            sum+=arr[i];
        }

        //if(t==k)break;
        if(t>k){
            left = mid+1;
        }

        else
        {
            ans=mid;
            right=mid-1;
        }
    }

    return ans;
}
