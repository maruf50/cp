#include <bits/stdc++.h>
using namespace std;

bool binSearch(vector<int>& a, int key) {
    int l = 0, r = a.size() - 1;

    while (l <= r) {
        int m = (l + r) / 2; // Prevents overflow

        if (a[m] == key) {
            return true;
        } else if (a[m] < key) {
            l = m + 1; // Move right
        } else {
            r = m - 1; // Move left
        }
    }
    return false;
}

int main() {
    vector<int> arr;
    int n;
    cin >> n;
    arr.resize(n); // Resize the vector to accommodate 'n' elements.
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << binSearch(arr, 6);
    return 0; // Added return 0 for successful execution.
}