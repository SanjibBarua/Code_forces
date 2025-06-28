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
    set<ll>s;
    while (t--)
    {
        ll no,x;
        cin>>no>>x;
        if(no==1)
        {
            s.insert(x);
        }
        else if(no==2)
        {
            s.erase(x);
        }
        else if(no==3)
        {
            if(s.find(x)!=s.end())
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;

            }
        }
    }
    
    return 0;
}
