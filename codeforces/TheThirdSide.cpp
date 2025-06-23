#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    
    while (t--)
    {
        int res;
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int i=0;i<n;i++){  
            cin >> ar[i];
        }
        if(n==1){
            cout << ar[0] << endl;
        }
        else{

            for(int i=0 ; n>1 ; i= i+2){ 
                res = ar[i]+ar[i+1] -1;
                
                ar.push_back(res);

                n-=1;
            }
            cout << res << endl;
        }

        


    }
    




}