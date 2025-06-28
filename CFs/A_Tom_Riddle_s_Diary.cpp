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
    map<string,ll>mp;
    while (t--)
    {
        string s;
        cin>>s;
        if(mp.count(s)>0){
            cout<<"YES"<<endl;
        }
        else{
            mp[s]++;
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}