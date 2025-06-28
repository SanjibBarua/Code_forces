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
        ll n,m,l,r;
        cin>>n>>m>>l>>r;
        ll a=-l,b=r;
        ll x=m;
        if(x>a) 
        {
            x=a;
        }
            cout<<-x<<" "<<m-x<<endl;
}
    return 0;
}