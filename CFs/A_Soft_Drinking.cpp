#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    fast();
    ll a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    ll x=(((b*c)/g)/a);
    ll y=(d*e)/a;
    ll z=(f/h)/a;
    cout<<min({x,y,z})<<endl;
    return 0;
}