#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>
using namespace std;

int main()
{
    int i,j,k,m,n,val,t=0,test;
    string a;
    cin>>test;
    while(test--){
            cin>>n;
        printf("Case %d:\n",++t);
        int sum=0;
        while(n--){
            cin>>a;
            if(a[0]=='d'){
                    scanf("%d",&val);
                    sum+=val;
            }
            else printf("%d\n",sum);
        }
    }

    //free();   //if pointer array
    return 0;
}
