#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
using namespace std;
double area(double a,double b,double c){
    double s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{

    int i,j,k,m,n,t=0,cnt,test;
    double ab,ac,bc,val,ans;
    cin>>test;
    while(test--){
        scanf("%lf %lf %lf %lf",&ab,&ac,&bc,&val);
        ///val=ade/bdec so ade/abc=ade/(ade+bdce)=1/(1+bdec/ade)=1/(1+1/val)

        val=1/(1+ 1/val);

        double mini=0,maxi=bc,mid,k;
        double abc=area(ab,bc,ac);
        cnt=0;
        while(cnt++<400){
            mid=(mini+maxi)/2;
            k=mid/bc;
            double ade=area(ac*k,bc*k,ab*k);
            if((ade/abc) > val)maxi=mid;
            else mini=mid;
        }
        printf("Case %d: %0.8lf\n",++t,ab*k);
        //cout<<ab*k<<endl;
    }

    //free();   //if pointer array
    return 0;
}
