#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define setprecision(x) cout<<fixed<<setprecision(x);
int main()
{
    optimize();
    ll n,k;
    cin >>n>>k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    ll value = 1;
    for (ll i = 0; i < n; i++) {
        value *= v[i];
        ll digits = 0;
        ll temp = value;
        while (temp > 0) {
            temp /= 10;
            digits++;
        }

        if (digits > k) {
            value = 1;
        }
    }

    cout << value << endl;

    return 0;
}