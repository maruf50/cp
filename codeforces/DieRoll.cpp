#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w,y;
    cin >> w >> y;
    int max;
    if(w>=y){
        max = w;
    }
    else{
        max = y;
    }
    int prob = (6-max) +1;
    int dice = 6;

    if(max == 1){
        cout << 1 <<"/"<< 1 << endl;
        return 0;
    }

    if(prob %2==0){
        prob = prob/2;
        dice = dice/2;
    }
    if(prob %3 ==0){
        prob = prob/3;
        dice = dice/3;
    }

    cout << prob <<"/"<<dice << endl;
} 
