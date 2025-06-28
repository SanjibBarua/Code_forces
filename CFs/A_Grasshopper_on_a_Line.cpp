#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;
    cin>>t;
    while (t--)
    {
     ll n,k;
     cin>>n>>k;
     if(n%k!=0)
     {
     cout<<1<<endl;
     cout<<n<<endl;
    }
    else
    {
        cout<<2<<endl;
        cout<<1<<" "<<n-1<<endl;
    }
    }
    
  return 0;
}
