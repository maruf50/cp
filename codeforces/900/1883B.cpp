#include <bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k; 
        string s;
        cin >> s;
        unordered_map<char,int> mp;
        vector<int> arr;
        int odd = 0;
        int even = 0;

        for(char x:s){
            mp[x]++;
        }

        for(auto x:mp){
           if(x.second%2==0) even++;
           else odd++;
           arr.push_back(x.second);
        }
        cout <<"even: " << even << endl;
        cout <<"odd: " << odd << endl;

        
        for (int i = 0; i < n; i++)
        {
            if (arr[i]%2 != 0 && arr[i] != 0 && k>0)
            {

                if(k<arr[i]) {
                    arr[i] -= k;
                    k = 0;
                }
                else{
                    k -= arr[i];
                    arr[i] =0;
                }

            }
        }
         


    }
    




}