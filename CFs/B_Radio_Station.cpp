#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    fast();
    ll n,m;
    cin>>n>>m;
    map<string,string>mp;
    for (ll i = 0; i < n; i++)
    {
        string name,ip;
        cin>>name>>ip;
        mp[ip]=name;
    }
    for (ll i = 0; i < m; i++)
    {
        string name2,ip;
        cin>>name2>>ip;
        ip.pop_back();
        cout<<name2<<" "<<ip<<"; #"<<mp[ip]<<endl;
    }
    
    return 0;
}