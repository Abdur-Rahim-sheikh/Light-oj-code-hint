#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
double keeper[1000099];
long long digits(long long n,long long base);
int main()
{
    long long i,j=0,k,m,n,count,base,test;
     long long facto;
    scanf("%lld",&test);

    for(i=1;i<=test;i++)
    {
        scanf("%lld %lld",&n,&base);
        facto=1+digits(n,base);
        printf("Case %lld: %lld\n",i,facto);
    }
    return 0;
}
long long digits(long long n,long long base)
{
	static long long count=2;
	if(n==0 || n==1)
		return 0;
	if(keeper[n]!=0)
		return keeper[n]/log10(base);
	else{

		for(	;count<=n;count++){
			keeper[count]=keeper[count-1]+log10(count);

		}
		return keeper[n]/log10(base);
	}

}
