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

        int a,b=0;
        int c = 0;


        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());

        int i =0;
        while (arr[i+1]-arr[i] <= m)
        {
            i++;
        }
        a = i;
        

        for (int i = 0; i < n-1; i++)
        {   
            
        }

        cout << res << endl;





        

        
    }
    




}