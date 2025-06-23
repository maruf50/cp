#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        vector<int> ans(2*n);
        vector<vector<int>> arr(n, vector<int>(n, 0));
        for(int i=0;i<n;i++){
            for(int j = 0;j<n;j++){
                cin >> arr[i][j];
            }
        }

        int a = 1;
        int x = 1;
        int y = 1;
        
        for(int i = 2;i<=(2*n);i++){
            y = y*i;
        }
        

        for(int i=0;i<n;i++){  
            ans[a] = arr[0][i];
            x *= ans[a];
            a++;   
        }
        for(int i=1;i<n;i++){  
            ans[a] = arr[i][n-1]; // fixed index from n to n-1
            x *= ans[a];
            a++;    
        }
        
        ans[0] = y/x;

        for(int i=0;i<(2*n);i++){
            cout << ans[i] << " ";
        }
        cout << endl; // optional: to separate test cases

    }

    return 0;
}