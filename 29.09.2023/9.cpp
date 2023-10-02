#include <bits/stdc++.h>

using namespace std;
int main() {
    //ascii таблица   
    //string s = "KANAGAT";
    //cout << char(107) << " " << int('k');
    //cout << int('2');
    //cout << 'A' - 'a';
    //
    //int n = s.size();
    //for(int i = 0;i < n;i++){
    //    s[i] = s[i] + 32;
    //}
    //cout << s;
    //2334
    string s = "2334";
    int w = 0;
    //cout << int('7'-'0');
    for(int i = 0;i < s.size();i++){
        //1000
        w += pow(10,s.size()-i-1) * int(s[i]-'0');
    }
    //cout << w;
    int a = 5;
    //cout << w + a;
}   