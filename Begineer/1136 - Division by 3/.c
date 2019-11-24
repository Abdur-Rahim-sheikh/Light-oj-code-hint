//1234 is divisible by three if (1+2+3+4) is divisible by three.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

long long ara[1000099];
long long digit_sum(long long n);
void thress(long long n);
int main(){
    long long i,j,k,test,val_a,val_b,a,b,count,rem,val;
    thress(10000);
    scanf("%lld",&test);
    for(i=0;i<test;i++){
        scanf("%lld %lld",&a,&b);
        thress(a);
        thress(b);
        val=ara[b]-ara[a-1];

        printf("Case %lld: %lld\n",i+1,val);
    }

    return 0;
}
long long digit_sum(long long n)
{
    long long sum=0;
    while(n>0){
       sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

void thress(long long n)
{
        static long long i=1,rem=0;
        long long val;
        if(ara[n]!=0)
            return;

        for( ;i<=n;i++)
        {
            val=digit_sum(i);
            rem=(rem+val)%3;
            if(rem)ara[i]=ara[i-1];
            else ara[i]=ara[i-1]+1;
        }
        return;

}

