#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

#define SWAP(x,y){ \
        x^=y;\
        y^=x;\
        x^=y;\
    }
int main()
{
    long long int i=0,j,k,m,n,test,peak,previous_peak,corner,x,y,in_which_square;

    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&n);
        in_which_square=sqrt(n-1)+1;

        peak=in_which_square*in_which_square;
        previous_peak=(in_which_square-1)*(in_which_square-1);

        corner=(peak+previous_peak+1)/2;
        //if peak is odd means it increase first up then left,,,
        //if peak is even then it increase first right then down.

        //let peak is 1st case means odd case
        if(n>corner)
        {
            x=in_which_square-(n-corner);
            y=in_which_square;
        }
        else{
            y= in_which_square-(corner-n);
            x=in_which_square;
        }
        //if it's not odd case then just swap,,
        if(in_which_square%2==0)  SWAP(x,y);

        printf("Case %lld: %lld %lld\n",++i,x,y);

    }
    return 0;
}
