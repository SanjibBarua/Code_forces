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
    ll a,b;
    while (n--)
    {
      cin>>a>>b;
      for (ll i = 0; i < b; i++)
      {
       cout<<i<<" ";
      }
      for (ll i = a-1; i>=b; i--)
      {
        cout<<i<<" ";
      }
      
      cout<<endl;      
    }
     return 0;
}