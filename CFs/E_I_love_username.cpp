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
    ll max=v[0],min=v[0];
    ll cnt=0;
    for (ll i = 1; i < n; i++)
    {
        if(v[i]>max){
            cnt++;
            max=v[i];
        }
        else if(v[i]<min){
            cnt++;
            min=v[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}