#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector<char> v;
    while(n!=0){
        int c = n % 16;
        if(c <= 9){
            v.push_back(c + '0');
        }else{
            v.push_back('A'+(c-10));
        }
        n /= 16;
    }
    reverse(v.begin(),v.end());
    for(int i = 0;i < v.size();i++)
        cout << v[i];
}