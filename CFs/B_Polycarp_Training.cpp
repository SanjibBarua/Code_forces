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
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll day=1;
    sort(v.begin(),v.end());
    for (ll i = 0; i < n; i++)
    {
       if(v[i]>=day)
       {
        day++;
       }
    }
    cout<<day-1<<endl;
    
    return 0;
}