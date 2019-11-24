#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<tgmath.h>
#include<cstdio>
#define ll long long
#define PI acos(0.0)
using namespace std;
 int bct,frdt;
string back_lib[100];
string forward_lib[100],blank;

void back_push(string str);
void forward_push(string str);
string back_pop();
string forward_pop();

int main()
{
    int i,j,k,m,n,test,t=0;
    cin>>test;
    while(test--){
        printf("Case %d:\n",++t);
        //cout<<"Case "+++t<<":\n";
        string cmd,str;
       bct=-1;frdt=-1;
        str="http://www.lightoj.com/";
        while(1){

            cin>>cmd;
            if(cmd=="BACK"){

                if(bct>=0){
                        forward_push(str);
                        str=back_pop();

                        cout<<str<<endl;
                }
                else back_pop();
            }
            else if(cmd=="FORWARD"){
                if(frdt>=0){
                    back_push(str);
                    str=forward_pop();

                    cout<<str<<endl;
                }
                else forward_pop();
            }
            else if(cmd=="VISIT"){
                back_push(str);
                cin>>str;

                cout<<str<<endl;
                frdt=-1;
            }
            else break;

        }

    }

    return 0;

}
void back_push(string str){
   back_lib[++bct]=str;

    return;
}
void forward_push(string str){
   forward_lib[++frdt]=str;

    return;
}
string back_pop(){
    if(bct<0){
        printf("Ignored\n");
        return blank;
    }
    else{
        return back_lib[bct--];
    }
}

string forward_pop(){
    if(frdt<0){
        printf("Ignored\n");
        return blank;
    }
    else{
        return forward_lib[frdt--];
    }
}
