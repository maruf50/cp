#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >>t;

    while(t--){
        int n ,step;
        cin >> n;
        step = 0;

        int x = 1; //for printing purpose

        float a = ((float)n/6) -(n/6); // to get the deciaml values after 0
        //cout << a << endl;
        if(a!=0.5 and a!=0 and n!=1){
            x *=-1;
            // time to print -1
        }
        else{

            while (n!=1 and x==1)
            {   
                float b = ((float)n/6) -(n/6);
                if(n<6 || b == 0.5){
                    n *=2;
                    step++;
                }
                else{

                    float c = ((float)n/6) -(n/6);
                    if(c!=0){
                        // time to print -1
                        x *=-1;
                    }
                    n /=6;
                    step++;
                    
                    
                }
            }
            
        }

        if(x==1){
            cout << step << endl;
        }
        else{
            cout << -1 << endl;
        }

    }
    



}