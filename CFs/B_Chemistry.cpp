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
        ll x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        set<char>st;
        for(auto value:s){
            st.insert(value);
        }
        ll odd=0;
        for(char u:st){
            ll cnt=0;
            for(auto v:s){
                if(u==v){
                    cnt++;
                }
            }
            if(cnt%2!=0){
                odd++;
            }
        }
        if(odd<=y+1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}