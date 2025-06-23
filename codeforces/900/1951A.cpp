#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;
    while (t--)
    {
        
        int n;
        cin >> n;
        string arr;
        cin >> arr;
        int ones = 0;
        int p =-1;
        int q = 1;

        for (int i = 0; i < n; i++)
        {
           if(arr[i] == '1'){
            ones++;
            if(p ==-1){
                p = i;
            }
             else{
                q = i;
            }
           }
           
        }

        if(ones%2==0){
            if(ones == 2){
                if(p+1 == q) cout << "NO" << endl;
                else cout << "YES" << endl;  
            }
            else{
               cout << "YES" << endl;  
            }

        }
        else{
            cout << "NO" << endl;
        }
        
    }
    




}