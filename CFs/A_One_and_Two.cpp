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
        ll cn1=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]==2)
            {
                cn1++;
            }
        }
        if(cn1%2!=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            ll x=cn1/2;
            ll cnt=0;
            for (ll i = 0; i < n; i++)
            {
                if(v[i]==2)
                    cnt++;
                    if(x==cnt)
                    {
                        cout<<i+1<<endl;
                        break;
                     
                }
            }
            
        }
    }
    return 0;
}