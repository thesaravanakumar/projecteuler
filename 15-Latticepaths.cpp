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
    ll a[21][21];
    for(int i=0;i<21;i++){
        for(int j=0;j<21;j++){
            a[i][j]=1;
        }
    }
    for(int i=1;i<21;i++){
        for(int j=1;j<21;j++){
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    cout<<a[20][20];
    return 0;
}