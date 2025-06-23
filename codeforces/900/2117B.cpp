#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        arr[0] = 2;
        arr[n-1] = 1;
        int val = n;

        if(n%2 ==0){
            for (int i = 1; i < (n/2); i++)
            {
                arr[i] = val;
                arr[(n-1)-i] = val-1;
                val -=2;
            }
        }
        else{
            arr[n/2] = 3;
            for (int i = 1; i < (n/2) ; i++)
            {
                arr[i] = val;
                arr[(n-1)-i] = val-1;
                val -=2;
            }
        }

        for(int x:arr){
            cout << x << " ";
        }
        cout << "" << endl;

        
        
    }
    





}