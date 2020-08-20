#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>

using namespace std;
int josephus(int n,int k){//this k'th person dies
    if(n==1)return 1;
    return (josephus(n-1,k)+k-1)%n + 1;
}
int main(){
    int i,j,k,m,n,val,t=0,cnt,test;
    cin>>test;

    while(test--){
        scanf("%d %d",&n,&k);
        int m=k;
        if(k==1){
            printf("Case %d: %d\n",++t,n);
            continue;
        }
        printf("Case %d: %d\n",++t,josephus(n,k));

    }
    //free();   //if pointer array
    return 0;
}
