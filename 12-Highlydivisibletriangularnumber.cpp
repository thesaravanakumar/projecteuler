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
    int temp=1,div,n=0,num=0;
    while(temp){
        n++;
        num+=n;
        div=0;
        for(int i=1;i<(int)floor(sqrt(num));i++){
            if(num%i==0)div+=2;
            if((int)floor(sqrt(num))*(int)floor(sqrt(num))==num)div--;
        }
        if(div>500)temp=0;
    }
    cout<<num;
    return 0;
}