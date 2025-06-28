#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    string s;
    cin>>s;
    for (ll i = 0; i < s.size(); i++)
    {
       if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
       {
        cout<<"YES"<<endl;
        return 0;
       }
    }
    cout<<"NO"<<endl;
  return 0;
}
