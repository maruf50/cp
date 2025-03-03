#include <bits/stdc++.h>
using namespace std;


bool isPowerTwo(int x){
    float a = log2(x);
    float l = (int)a;
    if((a-l)==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int t;
    cin >> t;
    cout << isPowerTwo(t) << endl;
    
    
}