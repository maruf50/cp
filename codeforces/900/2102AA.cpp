#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int n,m;
        cin >> n >> m;
        int res = 0;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());

        int x=0;
        int y=n-1;

        while (x<y)
        {
            if(arr[x]+arr[y]<m){
                x++;
                //y--;
            }
            else if(arr[x]+arr[y]>m){
                y--;
            }
            else{
                x++;
                y--;
                res++;
            }
        }
        cout << res << endl;
        

    }

}