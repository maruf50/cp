#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,w;
    cin >> n >> w;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int res =1;
    for(int i =1;i<n;i++){
        if(arr[i]+arr[i-1] <=w){
            res++;
            i++;
        }
        else{
            res++;
        }
    }
    cout << res << endl;



}