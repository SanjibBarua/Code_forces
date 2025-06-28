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
     set<ll>s;
    while (t--)
    {
       ll n,x;
       cin>>n>>x;
       if(n==1) 
       {
        s.insert(x);
       }
        else if(n==2) 
        {
            s.erase(x);
        }
       else if(n==3)
        {
        if(s.find(x)==s.end()){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
       }
    }
    return 0;
}