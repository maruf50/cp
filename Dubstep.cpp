#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;
    string a;
    int j = 0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
            i+=2;
            if(a[j-1] !=' ' and j!=0){
                a+=' ';
                j++;
            }     
        }
        else{
            a+=s[i];
            j++;
        }
    }
    cout << a << endl;


}