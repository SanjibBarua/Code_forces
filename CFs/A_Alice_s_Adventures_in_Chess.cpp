#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
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
        ll n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        pll p={0,0};
        bool flag=false;
        for (ll i = 0; i < 10; i++)
        {
            for(auto c:s){
                if(c=='N') p.second++;
                else if(c=='E') p.first++;
                else if(c=='S') p.second--;
                else if(c=='W') p.first--;
                if(p.first==a && p.second==b){
                    flag=true;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }  
    
    return 0;
}