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
        ll s1=0,s2=0;
        for (ll i = 0; i < n; i++)
        {
            if(v[i]%2==0)
            {
                s1+=v[i];
            }
            else
            {
                s2+=v[i];
            }
        }
        if(s1%2==0 && s2%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(s1%2!=0 && s2!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
  return 0;
}
