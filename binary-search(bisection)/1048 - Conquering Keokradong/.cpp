#include<bits/stdc++.h>
#define pb push_back
#define p2(m,n) printf("showing %d %d\n",m,n)

using namespace std;
int arr[1005],sum,big,n,k;

int query(int mid){
    int t=0,sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>mid){
            sum=0;
            t++;
        }
        sum+=arr[i];
    }
    return t+1;
}
int bemin(){
    int mini=big-1;
    for(int i=sum/2;i>0;i/=2){
        int t=query(mini+i);
        //p2(t,k);
        while(mini+i<=sum and query(mini+i)>k)mini+=i;
    }
    return mini+1;
}
void print(int mini){
    int sum=0,t=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>mini or (k-t)==(n-i+1)){
            printf("%d\n",sum);
            sum=0;
            t++;
        }
        sum+=arr[i];
    }
    printf("%d\n",sum);
}
int main()
{
    int i,test,t=0;
    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--){
        scanf("%d %d",&n,&k);
        n+=1; k+=1;
        sum=0;
        for(i=0;i<n;i++) scanf("%d",&arr[i]),sum+=arr[i];

        big=*max_element(arr,arr+n);
        int mini=bemin();
        printf("Case %d: %d\n",++t,mini);
        print(mini);
    }

    //free();   //if pointer array
    return 0;
}
