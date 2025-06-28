#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));

        // Read matrix
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> a[i][j];

        // Find max value in the matrix
        int max_val = 0;
        vector<pair<int, int>> max_pos;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (a[i][j] > max_val)
                    max_val = a[i][j];

        // Find all positions having the max value
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (a[i][j] == max_val)
                    max_pos.emplace_back(i, j);

        int ans = INT_MAX;

        // Try all row,col combinations where max_val is located
        for (auto [r, c] : max_pos) {
            vector<vector<int>> temp = a;
            for (int i = 0; i < n; ++i)
                temp[i][c]--;
            for (int j = 0; j < m; ++j)
                if (j != c) temp[r][j]--;

            // Find new max after operation
            int new_max = 0;
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < m; ++j)
                    new_max = max(new_max, temp[i][j]);

            ans = min(ans, new_max);
        }

        cout << ans << '\n';
    }

    return 0;
}
