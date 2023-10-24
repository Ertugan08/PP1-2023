//1 1
//# * * * * * * *
//* * . . . . . . 
//* . * . . . . .
//* . . * . . . .
//* . . . * . . .
//* . . . . * . .
//* . . . . . * .
//* . . . . . . *

//3 14
//. * . * . * . .
//. . * * * . . . 
//* * * # * * * *
//. . * * * . . .
//. * . * . * . .
//* . . * . . * .
//. . . * . . . *
//. . . * . . . .

#include <bits/stdc++.h>

using namespace std;


int main(){
    int n,m;cin >> n >> m;
    for(int i = 1;i <= 8;i++){
        for(int j = 1;j <= 8;j++){
            if(i == n and j == m){
                cout << "#";
                continue;
            }
            if(j == m or i == n or n + m == i + j or n-m == i-j)
                cout << "*";
            else 
                cout << '.';
            
        }
        cout << endl;
    }
}