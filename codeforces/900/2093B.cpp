#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.length();

        int res = 0;
        int os = 0;

        for (int i = 0; i < n; i++)
        {
            if(s[i]!='0') res++;

        }
        for (int i = n-1; i >= 0; i--)
        {
            if(s[i]=='0') res++;
            else{
                break;
            }
        }

        cout << res - 1<< endl;
 
    }

}