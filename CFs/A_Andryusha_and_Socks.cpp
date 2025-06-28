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
    set<ll>ml;
    ll mx=ml.size();
    for (ll i = 0; i < n*2; i++)
    {
        ll x;
        cin>>x;
        if(ml.find(x)==ml.end()){
            ml.insert(x);
        }
        else{
            ml.erase(x);
        }
        ll sz=ml.size();
        mx=max(mx,sz);
    }
    cout<<mx<<endl;
    return 0;
}