#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        
        vector<int> a(2);
        vector<int> b(2);
        vector<int> c(2);
        cin >> a[0] >> a[1] >>b[0] >> b[1] >> c[0] >> c[1];

        vector<int> X ={1,1,-1,-1,0,0,1,-1};
        vector<int> Y ={1,-1,1,-1,1,-1,0,0};

        vector<vector<int>> ans(16, vector<int>(2, 0));

        int ct = 0;

        for(int i =0;i<8;i++){ 
            ans[i][0] = b[0]+(X[i]*a[0]);
            ans[i][1] = b[1]+(Y[i]*a[1]);  
        }

        for(int i =8;i<16;i++){
            ans[i][0] = c[0]+(X[i%8]*a[0]);
            ans[i][1] = c[1]+(Y[i%8]*a[1]);  
        }

        for(int i=0;i<16;i++){
            if(ans[i][0] == a[0] && ans[i][1] == a[1]){
                ct++;
            }
        }

        cout << ct << endl;



    }
    



}