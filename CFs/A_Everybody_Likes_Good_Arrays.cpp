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
       for (ll i = 0; i < n; i++)
       {
        cin>>v[i];
       }
       ll count=0;
       for (ll i = 0; i < v.size()-1; i++)
       {
        if(v[i]%2==v[i+1]%2)
        {
            v[i+1]=v[i+1]%2;
            count++;
           
        }
       }
       cout<<count<<endl;
    }
  return 0;
}