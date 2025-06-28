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
        vector<ll>b(n),a;
        for (ll i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        a.push_back(b[0]);
        for (ll i = 1 ;i < n; i++)
        {
            if(b[i]>=b[i-1])
            {
                a.push_back(b[i]);
            }
            else
            {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }
        cout<<a.size()<<endl;
        for(auto num:a)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}