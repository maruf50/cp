#include <bits/stdc++.h>
using namespace std;


int DecToBin(int n){

    static int res = 0;

    if(n>0){

        res = DecToBin(n/2);

    }
    return ((res*10) + (n%2));



}


int main(){

    cout << DecToBin(97) << endl;
    
}