#include <bits/stdc++.h>
using namespace std;

bool sortalg(vector<int> a ,vector<int> b){
    return a[0] < b[0];
}

int main(){

    int n;
    cin >> n;
    vector<vector<int>> arr(n,vector<int> (2, 0));  

    

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1]; 
    }

    sort(arr.begin(),arr.end(),sortalg);

        



    for (int i = 0; i < n; i++)
    {
        cout << arr[i][0] <<"," << arr[i][1] << endl;
    }
    




}