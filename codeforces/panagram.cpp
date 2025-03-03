#include <bits/stdc++.h>
using namespace std;

int main(){

string word;
cin >> word;
string x ;
int val =0;

if(word.length() <26){
    cout << "NO" << endl;
}
else{
    //string a = word.tolower()
    for(char& c : word){

        c = (char) tolower(c);
        val += (int) c;
        x +=c;
    }
    if(val == 2847){
        cout << "YES" << endl;
    }


}
//cout << x << endl;

}