#include <bits/stdc++.h>
using namespace std;

// Count frequency of each number using hashing
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    int mx = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    vector<int> freq(mx + 1, 0);
    for (int x : arr) {
        freq[x]++;
    }

    int q;
    cin >> q;

    while (q--) {
        int num;
        cin >> num;

        if (num > mx) {
            cout << 0 << "\n";
        } else {
            cout << freq[num] << "\n";
        }
    }

    return 0;
}
