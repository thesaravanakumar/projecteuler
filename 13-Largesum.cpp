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
int a[100001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    char s[52];
    int n,k,i;
    w(t){
        cin>>s;
        for(i=49;i>=0;i--){
            k=100000-49+i;
            if((s[i]+a[k]-'0')>9){
                a[k]=(s[i]+a[k]-'0')%10;
                int r=1;
                k--;
                while(r){
                    if((1+a[k])>9){
                        a[k]=0;
                        r=1;
                    }
                    else {
                        a[k]=1+a[k];
                        r=0;
                    }
                    k--;
                }
            }
            else a[k]=s[i]+a[k]-'0';
        }
    }
    i=0;
    while(a[i]==0) i++;
    for(int j=i;j<i+10;j++)
        cout<<a[j];
    cout<<endl;
    return 0;
}