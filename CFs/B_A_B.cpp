#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    fast();
    ll a,b;
    while (cin>>a>>b)
    {
        set<ll>s;
        ll x;
        while (a--)
        {
            cin>>x;
            s.insert(x);
        }
        while (b--)
        {
            cin>>x;
            s.insert(x);
        }
        for(auto num:s){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}