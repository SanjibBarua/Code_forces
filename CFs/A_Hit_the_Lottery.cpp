#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    fast();
    ll n;
    cin>>n;
    ll cnt=0;
    cnt+=n/100;
    n%=100;
    cnt+=n/20;
    n%=20;
    cnt+=n/10;
    n%=10;
    cnt+=n/5;
    n%=5;
    cnt+=n;
    cout<<cnt<<endl;
    return 0;
}