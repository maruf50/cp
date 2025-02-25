#include <bits/stdc++.h>
using namespace std;


int main(){

int n;
cin >> n;
int c = 0;

while(n > 0){

    if(n>=500){
        n-=500;
        cout <<500
        c++;
    }
    else if(n>=100){
        n-=100;
        c++;
    }
    else if(n>=50){
        n-=50;
        c++;
    }
    else if(n>=10){
        n-=10;
        c++;
    }
    else if(n>=5){
        n-=5;
        c++;
    }
    else{
        n-=1;
        c++;
    }
}

cout << c << endl;



}
// You have an unlimited number of cash notes of the following denominations: 1, 5, 10, 50, 100, 500.
// Given a number 
// N, determine the minimum number of cash notes required to make the total 
// N. For this problem, you will have to print out the values of each cash note in ascending order.
// For example, when 
// N
// =
// 1535
// N=1535, the minimum number of notes required is 7. And to make this total, you need the following cash notes:

// 5 10 10 10 500 500 500