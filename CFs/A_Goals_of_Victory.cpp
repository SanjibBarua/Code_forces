#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    optimize();
    ll t;
    cin>>t;
    while (t--)
    {
       ll n;
    cin>>n;
    vector<ll>v(n);
    for (ll i = 0; i < n-1; i++)
    {
        cin>>v[i];
    }
    ll sum=0;
    for (ll i = 0; i < n-1; i++)
    {
        sum=sum+v[i];
    }
    cout<<-1*sum<<endl;
    }
    return 0;
}