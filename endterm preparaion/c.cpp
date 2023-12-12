#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;cin >> str;
    sort(str.begin(),str.end());
    cout << "The anagram variants for string cat are:\n";
    do{
        for(int i = 0;i < str.size();i++)
            cout << str[i];
        cout << endl;
    }while(next_permutation(str.begin(),str.end()));
}