#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int res = pow(2,n);
    cout << res%(int)(1e9+7) << endl;

}