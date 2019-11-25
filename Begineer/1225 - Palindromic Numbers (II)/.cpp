#include<iostream>
#include<string.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>
using namespace std;
int main()
{
    int i,j,k,m,n,val,t=0,test;
    char strl[1000];
    cin>>test;
    while(test--){
        scanf("%s",strl);

        n=strlen(strl);
        for(i=0,j=n-1;i<n/2;i++,j--)
        {
            if(strl[i]!=strl[j]) break;
        }

        printf("Case %d: ",++t);
        if(i<n/2) printf("No\n");
        else printf("Yes\n");
    }


    //free();   //if pointer array
    return 0;
}
