#include <bits/stdc++.h>
using namespace std;

int main(){


    vector<int> coins = {1,2};
    int n = coins.size();
    vector<int> min_coins;
    //int min_count  = 0;
    int money;
    cin >> money;

    while (money > 0)
    {
        if(money >= coins[n-1]){
            //min_count++;
            money -= coins[n-1];
            min_coins.push_back(coins[n-1]);
            //cout << money << " ";
 
        }
        if(money < coins[n-1] && n > 0){
            n--;
        }
    }

    for(int i : min_coins){
         cout << i << " ";
     }
    


}