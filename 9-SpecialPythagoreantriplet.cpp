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
    int flag=0;
    for(int i=1;i<1000/3&&flag==0;i++){
        for(int j=2;j<1000/2&&flag==0;j++){
            int k=1000-i-j;
            if(i*i+j*j==k*k&&i+j+k==1000){
                cout<<i*j*k;
                flag=1;
            }
        }
    }
    return 0;
}