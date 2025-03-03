#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    int n1 = 0;
    int n0 = 0;
    for(int i=0;i<n;i++){
        char x;
        cin >> x;
        if(x=='0') n0++;
        else n1++;
    }

    if(n1<=n0){
        cout << n -(2*n1) << endl;
    }
    else{
        cout << n -(2*n0) << endl;
    }





}