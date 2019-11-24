//S for addition an integer in all array element.
//m for multiplication ,,D for division,,P for exchange position
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    char wht;
    long long i,j,k=0,m,n,test,arry[105],val,sum,mul,div,count,scnd_val,tem;

    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld %lld",&n,&m);
        for(i=0;i<n;i++) scanf("%lld",&arry[i]);

        for(i=0,sum=0,count=0;i<m;i++)
        {

            scanf("%*c%c",&wht);
            //printf("\n%c   **\n",wht);
            if(wht!='R')
                scanf("%lld",&val);

            if(wht=='S')
                sum=sum+val;
            else if(wht=='R')
                {
                    for(int l=0,j=n-1;l<n/2;l++,j--)
                    {
                        tem=arry[l];
                        arry[l]=arry[j];
                        arry[j]=tem;
                    }
                }
            else if(wht=='M')
            {
                for(j=0;j<n;j++)
                {
                    arry[j]=(arry[j]+sum)*val;          //this val is for multiplication
                }
                sum=0;
            }
            else if(wht=='D')
            {
                for(j=0;j<n;j++)
                {
                    arry[j]=(arry[j]+sum)/val;          //this val is for division
                }
                sum=0;
            }
            else if(wht=='P')
            {
                scanf("%lld",&scnd_val);

                tem=arry[scnd_val];
                arry[scnd_val]=arry[val];
                arry[val]=tem;
            }
        }
        printf("Case %lld:\n%lld",++k,arry[0]+sum);                ///+sum cause if any sum value left to add.
        for(i=1;i<n;i++) printf(" %lld",arry[i]+sum);             ///if any sum value left to add.
        printf("\n");
    }

    return 0;
}

