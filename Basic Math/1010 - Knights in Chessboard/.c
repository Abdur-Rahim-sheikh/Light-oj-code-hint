#include<stdio.h>

int main(){
    int m,n,test,i=0,val;

    scanf("%d",&test);
    while(test--){
        scanf("%d %d",&m,&n);
        if(m==1  || n==1) printf("Case %d: %d\n",++i,m*n);

        else if (m==2 || n==2) {
            val=4*(m*n/8);
            val+=((m*n)%8<4)?(m*n)%8:4;

            printf("Case %d: %d\n",++i,val);
        }

        else{
            val=((m*n-1)/2)+1;
            printf("Case %d: %d\n",++i,val);
        }

    }
    return 0;
}


