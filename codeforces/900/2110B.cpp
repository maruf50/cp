#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        
        int os = 0;
        int cnt = 0;
        string s;
        cin >> s;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='(') cnt ++;
            else cnt --;

            if(cnt==0) os++;
            if(os > 1) {
                //cout <<"yes" << endl;
                os++;
                break;
            }
        }
        if(os > 1) cout <<"yes" << endl;
        else cout <<"no" << endl;
        
        
        
       
    }

}