#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<queue>
#include<map>
#define INF 1073741824
#define ll long long
#define PI 2*acos(0.0)
using namespace std;
bool isLeapyear(ll val){
    if(val%400==0 || (val%100!=0 && val%4==0)) return true;
    return false;
}
ll lp(ll a){return a/4 - a/100 + a/400;}
int main()
{

    ll i,j,k,m,n,val,test,cnt=0;

    string feb= "February",jan="January";

    string month[3];
    ll year[3],day1,day2;
    cin>>test;
    while(test--){
        char ch;
        cin>>month[0]>>day1>>ch>>year[0];
        cin>>month[1]>>day2>>ch>>year[1];
     
        ll t=0;

        ///same year especial
        if(year[0]==year[1] && isLeapyear(year[0])){
            if(month[0]==jan || (month[0]==feb && day1<=29)){
                if((month[1]!=jan && month[1]!=feb) || (month[1]==feb && day2==29))
                    printf("Case %lld: 1\n",++cnt);
                else printf("Case %lld: 0\n",++cnt);
            }
            else printf("Case %lld: 0\n",++cnt);

            continue;
        }
        if(isLeapyear(year[0])){

            if(month[0]==jan ||(month[0]==feb && day1<=29)){
                t++;
            }
        }
        if(isLeapyear(year[1])){
             if((month[1]!=jan && month[1]!=feb) ||(month[1]==feb && day2==29)){
                t++;
            }
            year[1]--;
        }


        ///corners year done now total sum.

        ll leapyear=lp(year[1])-lp(year[0]);

        printf("Case %lld: %lld\n",++cnt,leapyear+t);
    }

    //free();   //if pointer array
    return 0;
}
