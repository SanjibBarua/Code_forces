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
        ll n,num=-1;
        cin>>n;
        vector<ll>v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for (ll i = 0; i <n-2; i++)
        {
            if(v[i]==v[i+1] && v[i+1]==v[i+2])
            {
                num=v[i];
            }
        } 
        cout<<num<<endl;
    }
    
    return 0;
}