#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
using namespace std;

int main()
{
    int i,j,k,m,n,t=0,cnt=0,test;
    double a,val,ans;
    cin>>test;
    while(test--){
        scanf("%lf %*lf %*lf %lf",&a,&val);
        ///val=ade/bdec so ade/abc=ade/(ade+bdce)=1/(1+bdec/ade)=1/(1+1/val)
        ///now ade/abc=ad/ab
        val=sqrt(1+1/val);
        //printf("Case %d: %0.8lf\n",++t,mid);
        cout<<a/val<<endl;
    }

    //free();   //if pointer array
    return 0;
}
