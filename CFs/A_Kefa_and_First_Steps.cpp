#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    fast();
    ll n;
    cin>>n;
    vector<ll>v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    ll cnt=1,mx=1;
    for (ll i = 0; i < n-1; i++)
    {
        if(v[i]<=v[i+1])
        {
            cnt++;
            mx=max(cnt,mx);
        }
        else{
            cnt=1;
        }
    }
    cout<<mx<<endl;
    
    return 0;
}