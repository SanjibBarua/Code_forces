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
    vector<string>v(t);
    for(auto &u:v){
        cin>>u;
        if(!mp[u]){
            cout<<"OK"<<endl;
        }
        else{
            cout<<u<<mp[u]<<endl;
            
        }
        mp[u]++;
    }
    return 0;
}