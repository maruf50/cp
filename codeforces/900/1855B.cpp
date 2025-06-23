#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        int res = 0;

        if(n%2 !=0) {
            cout << 1 << endl;
            continue;
        }

        int p = 1;
        while (p<=n)
        {
            if(n%p == 0){
                res += 1;
            }
            else{
                break;
            }
            p++;
        }

        cout << res << endl;
        

    }
    




}