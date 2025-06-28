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
    vector<ll>v(t);
    for (ll i = 0; i < t; i++)
    {
        cin>>v[i];
    }
    ll mn=abs(v[0]);
    for (ll i = 0; i < t; i++)
    {
       if(abs(v[i])<mn)
       {
        mn=abs(v[i]);
       }
    }
    cout<<abs(mn)<<endl;
    return 0;
}