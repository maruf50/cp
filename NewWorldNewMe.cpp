#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {   
        int n,k,p;
        cin >> n >> k >> p;  // we must reach the value k          -p <= x <= p
        vector<int> a (n,0);
        int steps = 0;
        //int res = 0;
        int flag = 1;

        if(k>0){
            while (k!=0)
            {
               if(k>=p){
                //res += p;
                k -=p;
                steps++;
               }
               else{
                p--;
               }
               
               if(steps > n){
                 flag = -1;
                 break;
               }
               
            }
            
        }
        else if(k<0){

            k *=-1; // converting it to positive
    
            while (k!=0)
            {
               if(k>=p){
                //res += p;
                k -=p;
                steps++;
               }
               else{
                p--;
               }
               
               if(steps > n){
                 flag = -1;
                 break;
               }
               
            }
        }
        else{
            flag = 0;
        }


        if(flag == 1 ){
            cout << steps << endl;
        }
        else if (flag == -1){
            cout << -1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        
    }
    


}