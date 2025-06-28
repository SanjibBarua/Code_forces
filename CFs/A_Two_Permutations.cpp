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
        ll n,a,b;
        cin>>n>>a>>b;
        if(a==n && b==n)
        {
            cout<<"Yes"<<endl;
        }
        else if((n-(a+b))>=2)
        {
        cout<<"Yes"<<endl;    
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    
  return 0;
}
