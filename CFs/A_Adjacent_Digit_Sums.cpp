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
       ll x,y;
       cin>>x>>y;
       ll n=x+1-y;
       if(n>=0 && n%9==0){
        cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }
    }
    
    return 0;
}