#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fast();
    ll n;
    cin>>n;
    vector<ll>v(n);
    for (ll i = 0; i < n-1; i++)
    {
        cin>>v[i];
    }
    ll a,b;
    cin>>a>>b;
    ll sum=0;
    for (ll i = a-1; i < b-1; i++)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;
    
    return 0;
}