#include <bits/stdc++.h>
using namespace std;
#define PI acos(0.0)
int main()
{

    int i,j,k,m,n,val,t=0,test;
    double ax,ay,bx,by,ox,oy;
    double oa,ab,ob,AOB;
    cin>>test;
    while(test--){
        scanf("%lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
        oa=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
        ab=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        ob=sqrt((ox-bx)*(ox-bx)+(oy-by)*(oy-by));
        AOB=acos((oa*oa+ob*ob-ab*ab)/(2*ob*oa));//value of aob is in radian and 360degree=PI radian
        ///2PI*r=PI radian,,then AOB radian=(2PI*r)*AOB/PI=2r*AOB;r=oa=ob
        printf("Case %d: %lf\n",++t,oa*AOB);
    }

    //free();   //if pointer array
    return 0;
}
