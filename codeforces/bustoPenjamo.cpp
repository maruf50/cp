#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}


int main(){

    int t;
    cin >> t;

    while(t--){

        int n,r;
        cin >> n >> r;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end(),cmp);

        int h = 0;
        //int ros = 0;
        int os = 0;
        //int seats = (2*r);

        for(int i = 0;i<n;i++){

            if(arr[i]==1){
                os++;
                continue;
            }

            if(arr[i]%2==1){
                h += arr[i] - 1;
                //ros+= 1;
                os++;
                r--;
            }
            else{
                h += arr[i];
                r--;
            }
            
            
        }

        if(r >= os){
            h += os;
        }
        else{
            h += (2*r) - os;
        }
        cout << h << endl;

       

    }



}