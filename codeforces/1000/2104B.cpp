#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--){
    
        /* code */

    

    int n;
    cin >> n;

    vector<long long> arr(n);
    vector<long long> arr1(n); // prefix sum
    vector<long long> brr(n); // prefix max
    long long sum = 0;
    vector<long long> res;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        arr1[i] = sum;

        if(i==0) brr[0] = arr[0];
        else{
            brr[i] = max(brr[i-1],arr[i]);
        }

    }

    res.push_back(sum);

    for (int i = 1; i < n; i++) {
        // max_element range should be (arr.begin(), arr.begin() + i)
        long long mx = brr[i-1];

        long long p = arr1[n-1] - arr1[i-1]; // sum of the range

        if (arr[i] <= mx) {
            p -= arr[i];
            p += mx;
            
        }
        
        res.push_back(p);
    }

    for (int i =n-1;i>=0;i--) {
        cout << res[i] << " ";
    }
    cout << endl;

    }
}
