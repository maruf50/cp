#include <bits/stdc++.h>
using namespace std;


void arrpr(int arr[],int n){
    
    if(n == 0) return;

    cout << arr[n-1] << endl;

    arrpr(arr,n-1);

}



int main(){

    int arr[10] = {1,5,6,4,66,33,23,6,11,2};

    arrpr(arr,10);


}