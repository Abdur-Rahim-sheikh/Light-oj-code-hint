#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    double v1,v2,v3,a1,a2,dist,covered_dist,maxTime;
    for(i=0;i<n;i++){
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        dist=0.5*((v1*v1/a1)+(v2*v2/a2));

        maxTime=v1/a1>v2/a2?v1/a1:v2/a2;

        covered_dist=v3*maxTime;

        printf("Case %d: %0.6lf %0.6lf\n",i+1,dist,covered_dist);
    }

    return 0;
}
