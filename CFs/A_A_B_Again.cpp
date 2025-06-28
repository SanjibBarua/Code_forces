#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fast();
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll x=n%10;
        ll y=n/10;
        cout<<x+y<<endl;
    }
    
    return 0;
}