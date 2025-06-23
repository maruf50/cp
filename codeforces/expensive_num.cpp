#include <bits/stdc++.h>
using namespace std;

int main(){


    string s;
    cin >> s;
    int cost = 0;
    int n = s.length();

    int track = -1;
   
    int i = n-1;

    while (1)
    {
          //11034020   11034020  1203010000
        if(s[i]!='0' && s[i-1]!='0'){
            i +=1;
        }
        else{
            break;
        }
        
        
    }
    
    for(i;i>=0;i--){

        

        
    }

    cout << cost << endl;
    


}