#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        string s;
        cin >> s;
        int zeros = 0;
        int ones = 0;
        int res = 0;
        for(int i=0;i<n;i++){

            if(s[i]=='0') zeros++;
            else ones++;
 
        }

        res = zeros + ((n-1)*ones);

        cout << res << endl;


       

    }
}