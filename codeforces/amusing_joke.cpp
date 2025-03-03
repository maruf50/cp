#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1;
    string s2;
    string s3;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    string s4 = s1+s2;

    if(s1.length()+s2.length() == s3.length()){

        sort(s3.begin(),s3.end());
        sort(s4.begin(),s4.end());
        for(int i =0 ; i<s3.length();i++){
            if(s3[i] != s4[i]){
                cout << "NO" << endl;
                return 0;
            }
        }
        cout << "YES" << endl;


    }
    else{
        cout << "NO" << endl;
    }



}