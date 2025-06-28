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
       vector<ll>v1(n);
        vector<ll>v2(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v1[i];
        }
        sort(v1.begin(),v1.end());
        for (ll i = 0; i < n; i++)
        {
            cin>>v2[i];
        }
        set<ll>s;
        for (ll i = 0; i < n; i++)
        {
            s.insert(v1[i]+v2[i]);
        }
        if(s.size()>=4)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    } 
    return 0;
}