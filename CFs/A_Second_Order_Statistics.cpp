#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    fast();
    set<ll>s;
    ll n;
    cin>>n;
    while (n--)
    {
        ll x;
        cin>>x;
       s.insert(x);
    }
    if(s.size()==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        s.erase(s.begin());
        cout<<*s.begin()<<endl;
    }
    return 0;
}