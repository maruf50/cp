#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int res = 0;

    int x = a + b + c;

    if(n>x){

        res += 3*(n/x);
        n = n%x;

        if(n<=a){
            res++;
            n-=a;
         }
        if(n<=b){
            res++;
            n-=b;
         }
        if(n<=c){
            res++;
            n-=c;
        }
    }
    else{
        if(n<=a){
            res++;
            n-=a;
         }
        if(n<=b){
            res++;
            n-=b;
         }
        if(n<=c){
            res++;
            n-=c;
        }
    }

    
    cout << res << endl;


}