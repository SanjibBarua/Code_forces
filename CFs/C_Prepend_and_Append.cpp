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
        string s;
        cin>>s;
        ll cnt=0;
        for (ll i = 0; i < n/2; i++)
        {
           if(s[i]==s[n-i-1])
           {
            break;
           }
          cnt++;
        }
        
        cout<<(n-cnt*2)<<endl;
    }
    
    return 0;
}