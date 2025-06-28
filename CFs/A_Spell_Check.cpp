#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    optimize();
    string s1="Timur";
    sort(s1.begin(),s1.end());
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        string s2;
        cin>>s2;
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}