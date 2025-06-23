#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;
    while (t--)
    {
        
        int n , a;
        cin >> n >> a;
        vector<int> arr(n,0);

        if(n==a){
            for(int i=0;i<n;i++){
                arr[i] = 1;
            }
        }
        else{

            if(n>2){

                if(a>1){
                arr[0] = 1;
                arr[n-1] = 0;
                arr[n-2] = 1;
                a -=2;
                int i = n-3;
                while (a--)
                {
                    arr[i] = 1;
                    i--;
                }
                }
                else{
                    arr[0] = 1;
                }
            
            }
            else{
                
                arr[0] = 1;
                arr[1] = 0;
                
            }
        }
        //output
        for(int x:arr){
            cout << x;
        }
        cout << endl;



    }
    
}
