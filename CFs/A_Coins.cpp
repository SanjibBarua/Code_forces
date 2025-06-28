#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    ll t;
    cin>>t;
    while (t--)
    {
       ll n,k;
       cin>>n>>k;
       if(n%2==0 || n%k==0)
       {
        cout<<"YES"<<endl;
       }
       else if((n-k)%2==0)
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
