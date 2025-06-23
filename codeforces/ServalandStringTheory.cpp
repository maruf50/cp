#include <bits/stdc++.h>
using namespace std;

int lexsmall(string a, string b) {
    int n = a.length();
    int i = 0;
    while (n--) {
        if (b[i] > a[i]) return false;
        i++;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b ;
        int n,c;
        cin >> n >> c;
        cin >> a;
        b = a;
        reverse(b.begin(), b.end());
        int ct = 0;
        int counter = 1;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (a[j] < a[i]) {
                    a[j] = a[i];
                    ct++;
                    if (lexsmall(a, b)) {
                        counter *= -1;
                        break;
                    }
                }
            }
        }
        if (counter == -1) {
            cout << "YES" << endl;
        } else {
            if ((ct <= c) && lexsmall(a, b))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}