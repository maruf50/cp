#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {

    int n,m;
    cin >> n >> m;
    int x =1;
    int y =1;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {

        string num;
        cin >> num;

        for (int j = m-1; j >= 0; j--)
        {
            int d;
            if(num[j] == '1') d = 1;
            else d = 0;
                
            v[i][j] = d;
        }

        // for (int j = 0; j < m; j++)
        // {
        //    cin >> v[i][j];
        // }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if(v[i][j] ==1){

            //cout <<"value of i : " << i << endl;
            //cout <<"value of j : " << j << endl;

            if(i==0 || j==0) break;

            for (int p = j-1; p >=0 ; p--)
            {
                 //if(i==0) break;
                 //cout <<"value of y : " << y << endl;
                 if(v[i][p] == 0 ){
                    y = 0;
                    
                    break;
                 }   //&& i!=0 && j!=0
                 
            }

            for (int q = i-1; q >= 0; q--)
            {
                 //cout <<"value of x : " << x << endl;   
                 if(v[q][j] == 0){
                    x = 0;
                    
                    break;
                 }   //&& j!=0 && i!=0
                 
            }

           }
           
           
        }
    }

    if(x || y){
        cout <<"YES" << endl;
    }
    else{
        cout <<"NO" << endl;
    }
    
    }

    
}