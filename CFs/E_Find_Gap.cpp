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
    vector<ll>v(n);
    ll total=n*(n+1)/2;
    ll sum=0;
    for (ll i = 0; i <n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll num=total-sum;
    cout<<num<<endl;
    return 0;
}