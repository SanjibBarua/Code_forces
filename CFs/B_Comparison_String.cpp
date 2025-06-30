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
        string s;
        cin>>n>>s;
        ll largest=1,current=1;
        for (ll i = 1; i < n; i++)
        {
            if(s[i]==s[i-1]){
                current++;
            }
            else{
                largest=max(largest,current);
                current=1;
            }
        }
        largest=max(largest,current);
        cout<<largest+1<<endl;
    }
    
    return 0;
}