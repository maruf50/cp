#include <bits/stdc++.h>
using namespace std;


int maxVal(int arr[],int n){
    
    static int i = 0, max = -999999; // using satic variable so it doesnot reset after each recursive call
                                    // learned it from W3resources

    if(i<n){

        if(arr[i] > max){
            max = arr[i];
        }
        i++;

        maxVal(arr,n);
 
    }
    else{
        return max;
    }

}



int main(){

    int arr[10] = {1,5,6,4,66,33,23,6,11,2};
    cout << maxVal(arr,10) << endl;


}