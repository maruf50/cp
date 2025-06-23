#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin >> t;

    while (t--)
    {
        
        int g,f,g1,f1;
        cin >> g >> f >> g1 >> f1;

        int x = min(g,g1);
        int y = min(f,f1) -1;

        if(x>y) cout << "Gellyfish" << endl;
        else cout << "Flower" << endl;

        




    }
    



}