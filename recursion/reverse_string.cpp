#include <bits/stdc++.h>
using namespace std;


string reverseString(string s,int n){
    
    static string x;

    if(n>=0){
        x+= s[n];
        reverseString(s,n-1);
    } 

    return x;


}



int main(){

    //int arr[10] = {1,5,6,4,66,33,23,6,11,2};
    string s;
    cin >> s;
    int n = s.length();
    //cout << maxVal(arr,10) << endl;

    cout << reverseString(s,n) << endl;


}