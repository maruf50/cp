#include <bits/stdc++.h>
using namespace std;

int z = 1000000000;



int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());

        int point = 0;

        for (int i = 0; i < n; i++)
        {
            for(int j = n-1; j < i; j--){
                if((a[i] || a[j]) != z){
                    
                }
            }
        }
        
    }
    

}