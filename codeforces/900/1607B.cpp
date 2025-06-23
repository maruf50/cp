#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        
        int n,m;
        cin >> n >> m;
        int res = n;

        int p = m%4;
        int q = (m/4) +1;

        if(n%2 ==0){
            if(p==0) res = res;
            else if(p==1) res -= (4*(q-1)+1);
            else if(p==2) res += q*1;
            else res += q*4;
        }
        else{
            if(p==0) res = res;
            else if(p==1) res += (4*(q-1)+1);
            else if(p==2) res -= q*1;
            else res -= q*4;
        }
        cout << res << endl;


    }

}