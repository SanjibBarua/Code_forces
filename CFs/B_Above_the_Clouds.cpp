#include <iostream>
#include <string>
using namespace std;

bool isSubstring(const string &b, const string &a_plus_c) {
    if (b.length() > a_plus_c.length()) return false;
    for (int i = 0; i <= a_plus_c.length() - b.length(); ++i) {
        bool match = true;
        for (int j = 0; j < b.length(); ++j) {
            if (a_plus_c[i + j] != b[j]) {
                match = false;
                break;
            }
        }
        if (match) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool found = false;
        for (int a_len = 1; a_len <= n - 2 && !found; ++a_len) {
            for (int c_len = 1; c_len <= n - a_len - 1 && !found; ++c_len) {
                int b_len = n - a_len - c_len;
                string a = s.substr(0, a_len);
                string b = s.substr(a_len, b_len);
                string c = s.substr(a_len + b_len, c_len);
                string a_plus_c = a + c;
                if (isSubstring(b, a_plus_c)) {
                    found = true;
                }
            }
        }
        
        cout << (found ? "Yes" : "No") << '\n';
    }
    return 0;
}