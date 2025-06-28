#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[50];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int minRemovals = n;

        int totalSubsets = 1 << n; // 2^n subsets

        for (int mask = 1; mask < totalSubsets; mask++) {
            int minVal = 51;
            int maxVal = 0;
            int count = 0;

            for (int i = 0; i < n; i++) {
                if ((mask >> i) & 1) {
                    if (a[i] < minVal) minVal = a[i];
                    if (a[i] > maxVal) maxVal = a[i];
                    count++;
                }
            }

            if ((minVal + maxVal) % 2 == 0) {
                int removals = n - count;
                if (removals < minRemovals) {
                    minRemovals = removals;
                }
            }
        }

        cout << minRemovals << endl;
    }

    return 0;
}
