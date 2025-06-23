#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> arr(n);

        

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if(n==1){
            cout << abs(m-arr[0]) << endl;
            
        }
        else if(m<arr[0] && m<arr[n-1]){
            cout << arr[n-1]-m << endl;
            
        }
        else if(m>arr[0] && m>arr[n-1]){
            cout << m-arr[0] << endl;
            
        }
        else{
            int a = m-arr[0];
            int b = arr[n-1]-m;

            int res = 2*min(a,b) + max(a,b);

            cout << res << endl;
        }

        

           
    }

}