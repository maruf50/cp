#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;
    while (t--)
    {
        
        int n , a;
        cin >> n >> a;
        vector<int> arr(n,0);

        for(int i=0;i<a;i++){
            arr[i] = 1;
        }
        //output
        for(int x:arr){
            cout << x;
        }
        cout << endl;



    }
    
}
