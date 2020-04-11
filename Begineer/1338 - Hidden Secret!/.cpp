#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;
int main()
{
    int i,k,t=0,test;

    char ch;
    cin>>test;
    cin.ignore();
    while(test--){
        int alpha[26];
        memset(alpha,0,sizeof alpha);
        //for 1st string
        while(true){
            ch=getchar();
            if(ch=='\n')break;
            if(ch!=' '){
                k=(ch&95)-'A';
                alpha[k]++;
            }
        }
        //for 2nd string
        while(true){
            ch=getchar();
            if(ch=='\n')break;
            if(ch!=' '){
                k=(ch&95)-'A';
                alpha[k]--;
            }
        }
        for(i=0;i<26;i++)if(alpha[i]!=0)break;

        if(i==26)printf("Case %d: Yes\n",++t);
        else printf("Case %d: No\n",++t);

    }
    //free();   //if pointer array
    return 0;
}
