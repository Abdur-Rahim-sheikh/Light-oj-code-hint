#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>
using namespace std;
int main(){
    int i,j,k,m,n,val,t=0,test,prev,counto;
    cin>>test;
    for(i=0;i<test;i++){
        scanf("%d",&n);
        prev=2;
        counto=0;
        while(n--){
            scanf("%d",&val);
            counto=counto+(val-prev)/5+(0<(val-prev)%5);
            prev=val;
        }
        printf("Case %d: %d\n",++t,counto);
    }
    //free();   //if pointer array
    return 0;
}
