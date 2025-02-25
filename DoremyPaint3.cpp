#include <bits/stdc++.h>
using namespace std;


int main(){

    vector<int> a;
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());

    vector<int> b;
    int j = 1;
    b.push_back(a[0]);
    for(int i = 1;i<n;i++){

        if(a[i] != b.back()){
            b.push_back(a[i]);
            j++;
        }

    }

    for(int x:b){
        cout << x << endl;
    }






}