#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> arr(n);
    vector<int> hash(256, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // hash[static_cast<unsigned char>(arr[i])]++;
        // an another method:
        hash[arr[i]-'a']++;
    }

    int q;
    cin >> q;

    while (q--)
    {
        char ch;
        cin >> ch;
        cout << hash[static_cast<unsigned char>(ch)-'a'] << '\n';
    }

    return 0;
}