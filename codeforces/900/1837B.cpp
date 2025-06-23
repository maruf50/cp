#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        
        int a = 0;
        int b = 0;
        int n;
        string s;
        cin >> n >> s;   //<<>>><>><<>>
        int max = INT_MIN;
        int x = 1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                x++;
            }
            else{
                if(x>max) max = x;
                x = 1;
            }
            if(x>max) max = x;
        }

        //int res = a-b;
        cout << max + 1 << endl;

       
    }

}