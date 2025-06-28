#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    optimize();
    ll m,n;
    cin>>m>>n;
    set<ll>num;
    ll x;
    for (ll i = 0; i < m; i++)
    {
        cin>>x;
        num.insert(x);
    }
    for (ll i = 0; i < n; i++)
    {
        cin>>x;
        num.insert(x);
    }
    for(ll u:num)
    {
        cout<<u<<" ";
    }
    cout<<endl;
    return 0;
}