#include              <bits/stdc++.h>
#define ll            long long int
#define w(t)          int t; cin>>t; while(t--)
#define F             first
#define S             second
#define pb            push_back
#define mp            make_pair
#define pii           pair<int,int>
#define mii           map<int,int>
#define sp(x,y)       fixed<<setprecision(y)<<x
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,num=0,mx=0,mxn,j;
    for(int i=2;i<1000000;i++){
        mxn=i;
        j=i;
        num=1;
        while(mxn!=1){
            if(mxn%2==0){mxn/=2;num++;}
            else{mxn=(mxn*3)+1;num++;}
        }
        if(mx<num){
            mx=num;
            n=j;
        }
    }
    cout<<n;
    return 0;
}