#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        long long n,k,x;  // 10 10 55
        cin >> n >> k >> x;
        long long a = (n*(n+1))/2;
        long long b = ((n-k)*((n-k)+1))/2;
        long long c = (k*(k+1))/2;

        if(n==k){

            if(x==a) cout << "YES" << endl;
            else cout << "NO" << endl;
            
        }
        else{
            if((c) > x){
                cout << "NO" << endl;
            }
            else{
                if((a-b) >= x) cout << "YES" << endl;   
                else cout << "NO" << endl;
            }
        }
    }
    



}