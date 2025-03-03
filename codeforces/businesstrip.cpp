#include <bits/stdc++.h>
using namespace std;

int main(){

    int k;
    cin >> k;
    int m = 0;
    vector<int> a(12);
    int sum = 0;
    for(int i=0;i<12;i++){
        cin >> a[i];
        sum +=a[i];
    }
    sort(a.begin(),a.end(),greater<int>());

    if(k>sum){
        cout << -1 << endl;

    }
    else{
        int i =0;
        while (m<k)
        {
            m+=a[i];
            i++;
        }
        cout << i << endl;

    }

    
    

}