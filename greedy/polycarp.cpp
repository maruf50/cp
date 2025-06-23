#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        


    int a,b;
    cin >> a >> b;
    int r = 0;

    if(a>=b && (a!=0 && b!=0)){
        r+= a/2;
        b -= a/2;
        a = a-(2*(a/2));
        

        if(a>0 && b>1){
            r++;
        }

    }

    else if(a<b && (a!=0 && b!=0)){
        r+= b/2;
        a -=b/2;
        b = b-(2*(b/2));
        

        if(b>0 && a>1){
            r++;
        }

    }
    else{
        r = 0;
    }


    cout << r << endl;
}

}