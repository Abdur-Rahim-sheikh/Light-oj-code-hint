#include<iostream>
#include<string>
#include<cstring>
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

int main()
{

    int i,j,k,m,n,val,t=0,cnt=0,test;
    string name,tem;
    cin>>test;
    while(test--){
        cin>>n>>name;
        if(name=="Alice")n--;

        tem=name;
        if(n%3==0)tem=(name=="Alice")?"Bob":"Alice";
        printf("Case %d: %s\n",++t,tem.c_str());

    }

    //free();   //if pointer array
    return 0;
}
