#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    fast();
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll mx=0,largest_length=0;
        for (ll i = 0; i < n; i++)
        {
            largest_length++;
            if(i==n-1 || abs(v[i+1]-v[i]>k)){
                mx=max(mx,largest_length);
                largest_length=0;
            }
        }
        cout<<n-mx<<endl;
    }
    
    return 0;
}