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
int main(){
    int flag=0,c=1,n=3;
    while(c<10001){
        flag=0;
        if(n%2==0)flag=1;
        for(int i=3;i<=floor(sqrt(n));i+=2)if(n%i==0)flag=1;
        if(!flag){
            c++;
        }
        n++;
    }
    cout<<--n;
}