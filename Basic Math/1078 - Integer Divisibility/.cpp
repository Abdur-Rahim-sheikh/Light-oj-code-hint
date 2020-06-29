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

int main(){
    int i,j,k,m,n,val,t=0,cnt=0,test;
    cin>>test;
    while(test--){
        scanf("%d %d",&n,&m);
        int cp_m=m;
        for(i=1;m%n!=0;i++)  m=(m%n)*10+cp_m;

        printf("Case %d: %d\n",++t,i);

    }

    //free();   //if pointer array
    return 0;
}
