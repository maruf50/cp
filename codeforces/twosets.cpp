#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int total = (n*(n+1))/2; 
    int res = 0;

    if(total % 2 !=0){
        cout << "NO" << endl;
    }
    else{

        cout << "YES" << endl;

        vector<int> vis(n+1,0); 
        vector<int> a; 
        vector<int> b;

        int on = n; 

        while (total/2 != res)
        {
            int mx = n; //max element
            if(res + mx <= total/2 ){
                res += mx;
                //res1 -= mx;
                vis[mx] = 1;
                a.push_back(mx);
            }
            n--;
        }

        for(int i=1;i<=on;i++){
            if(vis[i] != 1){
                b.push_back(i);
            }
        }

        cout << a.size() << endl;

        for(auto x:a){
            cout << x <<" ";
        }
        cout << endl;
        cout << b.size() << endl;
        for(auto y:b){
            cout << y <<" ";
        }

    }

    

}