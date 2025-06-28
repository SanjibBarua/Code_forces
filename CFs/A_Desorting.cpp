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
        if(!(is_sorted(v.begin(),v.end())))
        {
        cout<<0<<endl;
        }
        else
        {
            ll min=v[1]-v[0];
            for (ll i = 1; i < n; i++)
            {
                ll dif=v[i]-v[i-1];
                if(dif<min)
                {
                    min=dif;
                }
            }
            cout<<min/2+1<<endl;
        }
    }
    
    return 0;
}