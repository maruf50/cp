#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {

        int n,m;
        cin >> n >> m;
        vector<vector<char>> arr(n, vector<char>(m, '.'));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
            
        }

        int mx = -1;
        int ini = -1;
        int x_index = 0;
        int y_index = 0;

        for (int i = 0; i < n; i++)
        {
            int hash = 0;

            for (int j = 0; j < m; j++)
            {
                if(arr[i][j]=='#') {

                    if(ini==-1){
                        x_index = j;
                        ini = 1;
                    }
                    hash++;
                    
                }
            }

            if(hash <mx){
                break;    //closing the loop
            }

            if(hash > mx){
                mx = hash;
                y_index = i;
            }
            
        }

        cout << y_index +1 <<" "<< x_index+1 << endl;
        
        
    }
    




}