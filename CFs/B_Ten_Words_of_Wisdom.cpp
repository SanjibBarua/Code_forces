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
        ll n;
        cin>>n;
        ll mx=0,cnt=0;
        for (ll i = 0; i < n; i++)
        {
            ll a,b;
            cin>>a>>b;
            if(a<11){
                if(b>mx){
                    mx=b;
                    cnt=i+1;
                }
            }
            
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}