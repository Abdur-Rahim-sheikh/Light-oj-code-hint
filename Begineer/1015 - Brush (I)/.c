#include<stdio.h>
int main(){
    int i=0,j,k,n,test,sum,val;
    scanf("%d",&test);
    while(test--){
        sum=0;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&val);
            if(val>0) sum+=val;
        }
        printf("Case %d: %d\n",++i,sum);
    }
    //free();   //if pointer array
    return 0;
}
