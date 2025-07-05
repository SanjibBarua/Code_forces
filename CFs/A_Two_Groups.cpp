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
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            cnt+=v[i];
        }
        cout<<abs(cnt)<<endl;
    }
    
    return 0;
}