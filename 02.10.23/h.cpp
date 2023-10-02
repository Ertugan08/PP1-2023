#include <bits/stdc++.h>

using namespace std;

int a[10];
//[0,0,0,0,0,0,0,0,0]
//int --> 0
//char --> ' '
//string --> ""
//bool --> false
int main() {
    //[124,21321414,5,4]
    //for(int i = 0;i < 10;i++)
    //    a[i] = 0;
    //[0,0,0..0]
    string s;cin >> s;
    for(int i = 0;i < s.size();i++){
        //112233
        //s[0]=1
        //a['1'-'0'] = a[1]++
        a[s[i]-'0']++;
    }

    //[0, 0, 2,0,0,2,0,0,2,0]
    //-1 -1
    // g = 2
    // 0 1 2 3 4 5 6 7 8 9
    int g = -1;
    for(int i =0;i < 10;i++){
        if(a[i] > 0 and g == -1){
            g = a[i];// g = 2
        }
        if(a[i] != g and a[i] != 0 and g != -1){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}