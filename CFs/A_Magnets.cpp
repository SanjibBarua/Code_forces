#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    optimize();
    ll t=1;
    while (t--)
    {
       ll n;
       cin>>n;
       vector<ll>v(n);
       for (ll i = 0; i < n; i++)
       {
        cin>>v[i];
       }
       ll cnt=1;
       for (ll i = 0; i < n-1; i++)
       {
        if(v[i]!=v[i+1])
        {
            cnt++;
        }
       }
       cout<<cnt<<endl;
    }
    
    return 0;
}