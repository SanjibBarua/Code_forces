#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    optimize();
    ll t;
    cin>>t;
    while (t--)
    {
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(y2<y1)
        {
            cout<<-1<<endl;
            continue;
        }
        ll moves=y2-y1;
        x1+=moves;
        if(x1<x2)
        {
            cout<<-1<<endl;
            continue;
        }
        moves+=(x1-x2);
        cout<<moves<<endl;
    }
    
    return 0;
}