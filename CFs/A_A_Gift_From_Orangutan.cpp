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
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        ll max_v=*max_element(v.begin(),v.end());
        ll min_v=*min_element(v.begin(),v.end());
        ll score=(max_v-min_v)*(n-1);
        cout<<score<<endl;
    }
    return 0;
}