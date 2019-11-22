#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t=0,cnt,n,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        int ones=0,zeros=0;
        while(!(n&1))zeros++,n=n>>1;
        while(n){
            if(!(n&1))break;
            ones++;
            n=n>>1;
        }

        printf("Case %d: ",++t);
        if(!n){
            int k=1<<(ones+zeros);
            k+=(1<<(ones-1))-1;
            cout<<k<<endl;
        }
        else{
            int k=n+1;
            ones--;
            zeros++;
            k=k<<(zeros+ones);
            k+=(1<<ones)-1;
            cout<<k<<endl;

        }
    }
    return 0;
}
