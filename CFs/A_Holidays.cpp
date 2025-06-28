#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    fast();
    ll n;
    cin>>n;
    int week=n/7;
    int extraday=n%7;
    ll min_day=week*2;
    ll max_day=min_day+ min(extraday,2);
    cout<<min_day<<" "<<max_day<<endl;
    return 0;
}