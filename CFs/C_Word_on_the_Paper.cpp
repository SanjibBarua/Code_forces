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
        string word="";
        for (ll i = 0; i < 8; i++)
        {
            for (ll j = 0; j < 8; j++)
            {
                char c;
                cin>>c;
                if(c!='.'){
                    word+=c;
                }
            }
            
        }
        cout<<word<<endl;
    }
    return 0;
}