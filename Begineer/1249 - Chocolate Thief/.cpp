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

    int a,b,c,i,j,k,m,n,t=0,test,val[1000],valu[4],measure;
    char name[500][1000];
    cin>>test;
    while(test--){
        scanf("%d",&n);
        if(n==2){
            cin>>name[0]>>a>>b>>c;
            k=a*b*c;
            cin>>name[1]>>a>>b>>c;
            m=a*b*c;

            if(k==m)
                printf("Case %d: no thief\n",++t);
            else if(k>m)
                printf("Case %d: %s took chocolate from %s\n",++t,name[0],name[1]);
            else
                printf("Case %d: %s took chocolate from %s\n",++t,name[1],name[0]);

            continue;
        }
        for(i=0;i<n;i++){
            scanf("%s %d %d %d",name[i],&a,&b,&c);
            val[i]=a*b*c;

        }
        valu[0]=val[0];valu[1]=val[1];valu[2]=val[2];
        sort(valu,valu+3);
        measure=valu[1];
        printf("Case %d: ",++t);
        for(i=0;i<n;i++)
                if(val[i]>measure) break;
        if(i==n)
        {
            printf("no thief\n");
            continue;
        }
        printf("%s took chocolate from ",name[i]);
        for(i=0;i<n;i++) if(val[i]<measure) break;
        printf("%s\n",name[i]);

    }

    //free();   //if pointer array
    return 0;
}
