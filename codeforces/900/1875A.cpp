#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int a,b,n;
        cin >> a >> b >> n;
        int res = 0;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        //sort(arr.begin(),arr.end()); // asc

        if(a==1){
            cout << (1+(b-1)) << endl;
            continue;
        } 

        if(b ==1){
            res = -1;
            b = 1;
        }
        else{
            res += b - 1;
            b = 1;
        }

        for (int i = 0; i < n; i++)
        {
            b = min(arr[i]+b,a);
            res += b-1;
            
        }
        cout << res << endl;





        


    }
    



}