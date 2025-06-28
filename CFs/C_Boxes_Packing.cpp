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
        map<ll,ll>mp;
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
        }
        for(auto &st:mp){
            cnt=max(cnt,st.second);
        }
        cout<<cnt<<endl;
    return 0;
}