#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        int odd = 0;
        int even = 0;
        for(int i=0;i<2*n;i++){
            int x;
            cin >> x;
            if(x%2 ==0) even++;
            else odd++;
        }
        if(even == odd) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}