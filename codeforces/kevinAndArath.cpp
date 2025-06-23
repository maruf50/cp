#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int odd = 0;
        int ev = 0;
        int res = 0;
    
        for(int i=0;i<n;i++){
            cin >> arr[i];
            if(arr[i]%2==0){
                ev++;
            }
            else{
                odd++;
            }
        }
    
        if(ev!=0){
            res = odd + 1;
        }
        else{
            res = odd - 1;  
        }
        cout << res << endl;
      
    }
    
 
}
