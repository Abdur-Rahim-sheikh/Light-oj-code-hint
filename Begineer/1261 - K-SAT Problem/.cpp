#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,m,t=0;
    int test,n,arr[30][100],prr[40];
    cin>>test;
    while(test--){
        scanf("%d %d %d",&j,&m,&k);
        for(i=0;i<j;i++){
            for(int l=0;l<k;l++){
                scanf("%d",&arr[i][l]);
            }
        }
        int p,q,l;
        scanf("%d",&p);
        for(i=0;i<p;i++){
            scanf("%d",&prr[i]);
        }
        for(i=0;i<j;i++){
            for( l=0;l<k;l++){
                int val=abs(arr[i][l]);
                for(q=0;q<p;q++){

                    if(val==prr[q])break;
                }
                if((arr[i][l]<0 && q==p) || (arr[i][l]>0 && q<p)){
                    ///if any of two condition fulfills means i'th person is happy
                    break;
                }
            }
            if(l==k){
                ///means no wish of this person is fulfilled.
                break;
            }
        }
        if(i<j) printf("Case %d: No\n",++t);
        else printf("Case %d: Yes\n",++t);
    }
}
