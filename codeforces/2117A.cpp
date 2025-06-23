#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        
        int n,p;
        cin >> n >> p;
        vector<int> arr(n);
        int l = 0;
        int abl = 0;
        int index = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if(p>=n){
            cout << "YES" << endl;
        }
        else{
            for(int i=0;i<n;i++){
                if(arr[i]==1){
                    if(abl==0){
                        i = i + p - 1;
                        abl = 1;
                        if(i>=n) break;
                    }
                    else{
                        index = i;
                        break;
                    }  
                } 
            }

            if(index>=n){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }


        }
        
        
    }
    




}