#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {   
        int n;
        cin >> n;
        string s;
        cin >> s;
        int point=0;
        sort(s.begin(),s.end());
        //cout << s << endl;
        point +=2;
        for(int i=1;i<n;i++){
            if(s[i] != s[i-1]){
                point += 2;
            }
            else{
                point ++;
            }

        }
        cout << point << endl;
    }
}