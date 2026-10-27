#include <bits/stdc++.h>
using namespace std;

// Count frequency of each number using hashing
int main() {
    int n;//inpput size of array
    cin >> n;

    vector<int> arr(n);
    int mx = 0;//to store maximum element in array

    for (int i = 0; i < n; i++) { 
        cin >> arr[i];//input array elements
        // mx = max(mx, arr[i]);//update maximum element
    }
    map<int,int> hash;

    vector<int> freq(mx + 1, 0); //to store frequency of each element
    for (int x : arr) {//iterate through array
        freq[x]++;//increment frequency of element x
    }

    int q;//input number of queries
    cin >> q;//input number of queries

    while (q--) {//iterate through queries
        int num;//input number to find frequency of
        cin >> num;//input number to find frequency of

        // if (num > mx) {//if number is greater than maximum element in array, its frequency is 0
        //     cout << 0 << "\n";//print 0
        // } else {//if number is less than or equal to maximum element in array, print its frequency
        //     cout << freq[num] << "\n";//print frequency of number
        // }
        cout<<hash[num];
    }

    return 0;
}
