#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int p = 1;
        int sum = 0;

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        if(n ==2){
            if(arr[0]==arr[1]){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }


        }
        else{

            for(int i=0;i<n-1;i++){
                sum += arr[i];
                if(arr[i]==0 + arr[i+1] == 0){
                    p *= -1;
                    break;
                }
                
            }

            if(p==1 && (sum!=n)){
            cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }

        }

        

    }

}