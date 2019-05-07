#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>

using namespace std;

int bemin(int big,int sum,int n,int k,int arr[])
{
    int l = big,r=sum,mid;

    while(l<=r)
    {
        mid= (l+r)/2;
        int sum=0,t=0;

        ///We assume that mid is the desired range or the min value of max sub array
        for(int i=0; i<n; i++)
        {
            if(sum+arr[i]>mid)
            {
                sum=0;
                t++;
            }
            sum+=arr[i];
        }

        t++;
        ///t++ cause last sum value has not been counted

        if(t==k)
            break;
        else if(t>k)
            l = mid+1;
        else
            r = mid-1;
    }

    return mid+100; ///for safety
}
int ismin(int val,int n,int k,int high,int arr[])
{
    while(val>=high)
    {
        val--;
        int sum=0,t=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]+sum>val)
            {
                sum=0;
                t++;
            }
            sum+=arr[i];
        }

        t++;    ///t++ cause last sum value has not been counted

        if(t>k)
            break;


    }
    return val+1;
}
int main()
{

    int i,j,k,m,n,val,t=0,cnt,test;

    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--)
    {
        scanf("%d %d",&n,&k);
        int arr[n+5],sum=0,big=0;
        n+=1;
        k+=1;
        for(i=0; i<n; i++)
            scanf("%d",&arr[i]),sum+=arr[i],big=max(big,arr[i]);

        /// The maximum value can be the total value of an array,and minimum value
        /// can be the highest value of a single element
        if(n==k)
        {
            printf("Case %d: %d\n",++t,big);
            for(i=0; i<n; i++)
                printf("%d\n",arr[i]);
            continue;
        }

        int probable_min = bemin(big,sum,n,k,arr);

        val = ismin(probable_min,n,k,big,arr);

        printf("Case %d: %d\n",++t,val);
        for(i=0,sum=0,cnt=0; i<n; i++)
        {
            if(sum+arr[i]>val || ((n-i+1)==(k-cnt)))
            {

                printf("%d\n",sum);
                sum=0;
                cnt++;
            }
            sum+=arr[i];
        }

        printf("%d\n",sum);

    }

    //free();   //if pointer array
    return 0;
}
