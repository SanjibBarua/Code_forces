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
       ll n;
       cin>>n;
        string s;
        cin>>s;
        bool serial=false;
       ll count=0;
       for (ll i = 0; i < n; i++)
       {
       if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.')
       {
        serial=true;
        break;
       }
        if(s[i]=='.')
        {
            count++;
        }
       }
       if(serial)
       {
        cout<<2<<endl;
       }
       else
       {
        cout<<count<<endl;
       }
    }
    
  return 0;
}
