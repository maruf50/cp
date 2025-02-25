#include <bits/stdc++.h>
using namespace std;

int main(){

int t;
cin >> t;
while (t--)
{
    int a,b;                      //10 4  //13 9 //100 13 //123 456 //92 46
    cin >> a >>b;
    int r;

    if(a>=b){

        if((2*b)<a){
        r = a%b;
        int l = (a/b)+1;
        int m = l*b;
        int s = (a - m);
        // just non neg value
        if(s>0){
            s = s;
        }
        else{
            s = s*-1;
        }
        // for comparing two values
        if(r<s){
            cout << r << endl;
        }
        else{
            cout << s << endl;
        }

        }
        else{
            cout << (2*b) - a << endl;

        }

    }
    else{
        r = b-a;
        cout << r << endl;
    }
    

}

}