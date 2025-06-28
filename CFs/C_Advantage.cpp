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
        vector<ll>temp=v;
        sort(temp.begin(),temp.end(),greater<ll>());
        for (ll i = 0; i < n; i++)
        {
            if(v[i]<temp[0]){
                cout<<v[i]-temp[0]<<" ";
            }
            else if(v[i]==temp[0]){
                cout<<v[i]-temp[1]<<" ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}