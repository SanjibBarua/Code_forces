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
        ll sq=ceil(sqrt(n));
        if(sq*sq==n){
            cout<<0<<" "<<sq<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}