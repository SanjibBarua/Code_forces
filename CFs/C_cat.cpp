#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll n;
    cin>>n;
    vector<string>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (ll i = 0; i < n-1; i++)
    {
        for (ll j = 0; j < n-1; j++)
        {
           if(v[j].size()>v[j+1].size())
           {
            swap(v[j],v[j+1]);
           }
        }
    }
    for (string s : v)
    {
        cout<<s;
    }
    
    
  return 0;
}