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
        if(n<=6) cout<<"NO"<<endl;
        else if(n==9) cout<<"NO"<<endl;
        else if(n%3){
            cout<<"YES"<<endl;
            cout<<1<<" "<<2<<" "<<n-3<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<1<<" "<<4<<" "<<n-5<<endl;
        }
    }
    return 0;
}