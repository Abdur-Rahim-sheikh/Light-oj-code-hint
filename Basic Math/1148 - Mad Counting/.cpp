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

    int i,j,k,m,n,val,t=0,cnt,test;

    //freopen("000input.txt","r",stdin);
    cin>>test;
    while(test--){
        cin>>n;
        int arr[100006]={0};
        for(i=0;i<n;i++){
            scanf("%d",&val);
            arr[val+1]++;
        }
        int sum=0;
        for(i=1;i<100006;i++)sum+=(arr[i]/i+(arr[i]%i>0?1:0))*i;
        printf("Case %d: %d\n",++t,sum);
    }
    //free();   //if pointer array
    return 0;
}
