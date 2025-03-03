#include <bits/stdc++.h>
using namespace  std;

int main()
{
    string s;
    cin >> s;
    vector<int> a;
    for(int i=0;i<s.length();i++){
        if(s[i] =='.'){
            a.push_back(0);
            continue;
        }
        if(s[i] =='-' and s[i+1] =='.'){
            a.push_back(1);
            i++;
            continue;
        }
        if(s[i] =='-' and s[i+1] =='-'){
            a.push_back(2);
            i++;
            continue;
        }
    }
    for(int i=0;i<a.size();i++){
        cout << a[i];
    }
} 