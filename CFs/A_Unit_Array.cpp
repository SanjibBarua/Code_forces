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
        ll pos=0,neg=0;
        for (ll i = 0; i < n; i++)
        {
            if(v[i]==1)
            {
                pos++;
            }
            else
            {
                neg++;
            }
        }
        ll total=0;
        if(pos>neg)
        {
            if(neg%2==1)
            {
                total++;
            }
        }
        else
        {
            total+=(neg-pos+1)/2;
            neg=n-(pos+total);
            if(neg%2==1)
            {
                total++;
            }
        }
        cout<<total<<endl;
    }
    
    return 0;
}