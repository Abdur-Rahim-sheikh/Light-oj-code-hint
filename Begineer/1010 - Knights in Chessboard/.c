`#include<stdio.h>

int main()
{
    int a,b,c,m,n,test,i=0,val;

    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&m,&n);
        if(m==1  || n==1)                   //if any of them is one then all place is possible for knight
            printf("Case %d: %d\n",++i,m*n);
        else if (m==2 || n==2)                //case here block process group 4 together then leave 4 blank
                                                //can occupy highest number of knight place.
           {
                if(m==2) val=n;
                else val=m;
                ///if(val%4==0) then place =val
                if(val%4==1 || val%4==3) val=val+1;
                else if(val%4==2) val=val+2;

                printf("Case %d: %d\n",++i,val);
           }

        else{
        val=((m*n-1)/2)+1;  //if m*n even then value equivalent to (m*n)/2 and if m*n equal odd
                            //then value equivalent to (m*n)/2+1 cause if m*n is odd then (m*n)/2==(m*n-1)/2

            printf("Case %d: %d\n",++i,val);
        }

    }
    return 0;
}`
