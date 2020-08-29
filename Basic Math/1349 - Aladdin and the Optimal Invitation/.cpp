#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define INF 1073741824
#define ll long long
#define PI (2*acos(0.0))
using namespace std;
char gap = 32;
template<typename T> 
ostream& operator<<(ostream &os, const vector<T> &v) { 
    os << '{'; 
    for (const auto &x : v) os << gap << x;
        return os << '}'; 
}
template<typename A, typename B> 
ostream& operator<<(ostream &os, const pair<A, B> &p) {
        return os << '(' << p.first << gap << p.second << ')';
}
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> 
void dbg_out(Head H, Tail... T) { 
    cerr << ' ' << H;
     dbg_out(T...); 
}
#define dbg(...) cerr << '(' << #__VA_ARGS__ << ')'<<':', dbg_out(__VA_ARGS__)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define x first
#define y second
#define vi vector<int>
#define vll vector<ll>
#define on(val,pos) val|(1<<pos)
#define off(val,pos) val&(~(1<<pos))
#define check(val,pos) (val&(1<<pos))
#define all(n) n.begin(),n.end()
//first four adjacent,second four corner
//int row[8]={0,-1,0,1,1,-1,-1,1};
//int col[8]={-1,0,1,0,-1,-1,1,1};
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

int main(){
    int i,j,k,n,m,val,t=0,test;
    //freopen("000input.txt","r",stdin);
    cin>>test;
    fastIO
    while(test--){
        cin>>m>>n>>k;
        vi row(m+1,0),col(n+1,0);
        int sum=0,a,b,c;
        for(i=0;i<k;i++){
            cin>>a>>b>>c;
            row[a]+=c;
            col[b]+=c;
            sum+=c;
        }
        sum=(sum+1)/2;
        int x,y,cnt=0;
        for(i=1;i<=m;i++){
            cnt+=row[i];
            if(cnt>=sum){
                x=i;
                break;
            }
        }
        for(i=1,cnt=0;i<=n;i++){
            cnt+=col[i];
            if(cnt>=sum){
                y=i;
                break;
            }
        }
        cout<<"Case "<<++t<<": ";
        cout<<x<<' '<<y<<endl;
    }
    //free();   //if pointer array
    return 0;
}
