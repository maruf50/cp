#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {

        int n,c;
        cin >> n >> c;
        int cost = 0;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());

        int count =0;
        for(int i =0;i<n;i++){
    
            count++;
            cost++;
            if(a[i]!=a[i+1]){
                if(count >c){
                    cost -= count; // resetting cost
                    cost += c; // setting cost 
                }
                count = 0;
            }
            
        }

        cout <<cost << endl;


    }

}