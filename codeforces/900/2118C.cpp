#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            res += __builtin_popcount(arr[i]);
        }
        sort(arr.begin(),arr.end());

        for (int i = n-1; i >= 0; i--)
        {
            if(arr[i]%2==0){
                res++;
            }
        }

        int i = n-1;

        while (k>0)
        {
            if(arr[i]%2==0){
                res++;
                k--;
            }
            i++;
        }
        


        cout << res << endl;
        
        
        

    }
    




}