#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    fast();
    string s,r="";
    cin>>s;
    stack<char>st;
    for (auto ch:s)
    {
        if(st.empty()) st.push(ch);
        else{
            if(st.top()==ch) st.pop();
            else st.push(ch);
        }
    }
    while (!st.empty())
    {
        r+=st.top();
        st.pop();
    }
    reverse(r.begin(),r.end());
    cout<<r<<endl;
    return 0;
}