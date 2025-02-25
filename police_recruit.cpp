#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> a;
    int c =0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
        if(x ==-1) c-=x; // total crime count
    }
    for(int i = 0;i<n;i++){
        if(a[i] == -1 && (i>0) ){
            if(a[i]+a[i-1] >= 0){

                int k = a[i]+a[i-1];
                for(int j =i;j<j+k;j++){
                c--;
                i++;
                }
            }
            
        }
    }

    cout << c << endl;

}