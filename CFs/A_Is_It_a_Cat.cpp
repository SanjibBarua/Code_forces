#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    fast();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        for (auto &ch : s) {
            ch = tolower(ch);
        }
        string st;
        st += s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                st += s[i];
        }

        if (st == "meow")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
