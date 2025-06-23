#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        int num = stoi(n);
        
        double x = sqrt(num);

        if(x - (double)floor(x) == 0){ // its an int
            
            if(num==0) cout << 0 << " " << 0 << endl;
            else cout << 1 << " " << x-1 << endl;

        }
        else{
            cout << -1 << endl;
        }
    
    }
    


}