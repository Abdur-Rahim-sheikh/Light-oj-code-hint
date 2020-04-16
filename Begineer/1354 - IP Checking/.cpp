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

    int i,j,k,m,n,val,t=0,test,sum,arr1st[10],arr2nd[10],pos;

    string a,b;
    cin>>n;
    while(n--){
        cin>>a>>b;
        for(i=b.length()-1,sum=0,pos=1,k=0;i>=0;i--){
           val=b[i]-'0';
            if(b[i]=='.'){
                arr1st[k++]=sum;
                sum=0;
                pos=1;
                continue;
            }
            sum+=val*pos;
            pos=pos*2;
        }
        arr1st[k++]=sum;

        for(i=a.length()-1,sum=0,pos=1,k=0;i>=0;i--){
           val=a[i]-'0';
            if(a[i]=='.'){
                arr2nd[k++]=sum;
                sum=0;
                pos=1;
                continue;
            }
            sum+=val*pos;
            pos=pos*10;
        }
        arr2nd[k++]=sum;

        for(i=0;i<k;i++)  ///t=4
        {
            if(arr1st[i]!=arr2nd[i]) break;

        }
        if(i==k) printf("Case %d: Yes\n",++t);
        else printf("Case %d: No\n",++t);
    }
    //free();   //if pointer array
    return 0;
}
