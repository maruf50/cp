#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int H,M;
        cin >> H >> M;

        int res = 0;

        res += (23-H)*60;
        res += (60-M);

        cout << res << endl;

    }

}