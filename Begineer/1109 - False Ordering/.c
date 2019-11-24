//have to out put the nth number after ordering according to their
// divisors and size.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct divosors{
    int factory,order;

}divi[1005],tem;
int divisor(int n);
int main()
{
    int i,j,k,m,n,test,count=0;
    for(i=0;i<1000;i++)
    {
        divi[i].factory=divisor(i+1);

        divi[i].order=i+1;

        //printf("%d %d %d\n",i+1,divi[i].factory,divi[i].order);
    }
    for(i=0;i<1000;i++) {
        for(j=i+1;j<1000;j++)
            {
                if(divi[i].factory>divi[j].factory)
                {
                    tem=divi[i];
                    divi[i]=divi[j];
                    divi[j]=tem;
                }
                else if(divi[i].factory==divi[j].factory && divi[i].order<divi[j].order){
                    tem=divi[i];
                    divi[i]=divi[j];
                    divi[j]=tem;
                }

            }
    }

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d",&n);

        printf("Case %d: %d\n",++count,divi[n-1].order);
    }
    return 0;
}

int divisor(int n)
{
	int i,count=0,tem;
	float cmp_n;
	cmp_n=n;
	if(n==1)
		return 1;
	for(i=1;i<=sqrt(n);i++)
	{
		if(n%i==0)
			count=count+2;
	}
	tem=sqrt(cmp_n);
	if(tem==sqrt(cmp_n))
		count--;

	return count;
}
