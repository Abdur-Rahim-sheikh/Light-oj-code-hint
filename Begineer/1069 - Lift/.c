#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,me,lift,n,total_second[25];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&me,&lift);
        total_second[i]=abs((me-lift)*4)+me*4+19;
    }
    for(i=0;i<n;i++)
    {
        printf("Case %d: %d\n",i+1,total_second[i]);
    }
    return 0;
}
