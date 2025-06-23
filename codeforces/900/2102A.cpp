#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n,m,p,q;
        cin >> n >> m >> p >> q;

        //int a = (n-p)*q;

        if(p==2){
            if(n%2==0)
        }
        else if(p==1){
            if(m==(p*q)) cout <<"yes" << endl;
            else cout <<"no" << endl;
        }
        else{
            if(n%p ==0){
                if((n/p)*q == m)  cout << "yes" << endl;
                else cout << "no" << endl;
               
            } 
            else cout << "no" << endl;
        }

        
    }
    



}