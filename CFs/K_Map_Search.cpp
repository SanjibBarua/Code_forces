#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    optimize();
    ll n;
    cin>>n;
    map<string,int>a;
    for(ll i=0; i<n; i++)
    {
        ll num;
        string color;
        cin>>num>>color;
        if(num==0)
        {
            ll x;
            cin>>x;
            a[color]=x;
        }
        else if(num==1)
        {
            cout<<a[color]<<endl;
        }
    }
    return 0;
}