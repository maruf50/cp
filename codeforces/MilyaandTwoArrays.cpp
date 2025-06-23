#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr1(n);
        vector<int>arr2(n);
        for(int i = 0 ;i<n;i++){
            cin >> arr1[i];
        }
        for(int i = 0 ;i<n;i++){
            cin >> arr2[i];
        }

        sort(arr1.begin(),arr1.end());
        sort(arr1.begin(),arr1.end());
        int x = 1;
        int y = 1;

        for(int i = 0 ;i<n-1;i++){
            if(arr1[i+1]!= arr1[i]) x++;
        }
        for(int i = 0 ;i<n-1;i++){
            if(arr2[i+1]!= arr2[i]) y++;
        }
        //cout <<"x:" << x <<" " << "y:" << y << endl;

        if((x>=3 || y>=3)){
            cout << "YES" << endl;
        }
        else{
            if(x>=2 && y>=2) cout <<"YES" << endl;
            else cout <<"NO" << endl;
            
        }






    }
    



    
}