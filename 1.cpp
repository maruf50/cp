#include <bits/stdc++.h>

using namespace std;

int main(){


int n;
cin >> n; // let say n=5 ; so the sum of elements of a and b should be n(n-1)/2

vector<int> arr1;
vector<int> arr2;
int sum =0;

for(int i=0;i<arr1.size();i++){
    sum +=arr1[i];
}
for(int i=0;i<arr2.size();i++){
    sum +=arr2[i];
}

if(sum == (n*(n-1))/2){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}




}