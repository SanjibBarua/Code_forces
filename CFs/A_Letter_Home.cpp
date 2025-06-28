#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    fast();
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,s;
        cin>>n>>s;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++)
        {
           cin>>v[i];
        }
        ll min_pos=v[0];
        ll max_pos=v[n-1];
        ll steps=(max_pos-min_pos)+min(abs(s-min_pos),abs(s-max_pos));
      cout<<steps<<endl;
    }
    return 0;
}