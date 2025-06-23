#include <bits/stdc++.h>
using namespace std;


int pow4(int n){

    if(n==1) return 1;

    if( (n<4) || (n%4 != 0)) return 0;

    pow4(n/4);
 

}


int main(){


    cout << pow4(3) << endl;        //5/4 == 1  , 5%4 == 1




}