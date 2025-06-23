#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}


int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end(),cmp);

        for(int i = 0;i<n-1;i++){
            arr[n-2-i] = (arr[n-1-i]+arr[n-2-i])/2;
        }
        cout << arr[0] << endl;






    }



}