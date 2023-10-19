#include <bits/stdc++.h>

using namespace std;

void sum(int first,int second){
    cout << first + second;
}

void divide(int first,int second){//4,2 --> int first = 4,//int second = 2;
    cout << first / second << endl;
}


int main(){
    int a,b;cin >> a >> b;// a + b
    //1 --> first
    //2 --> second
    divide(4,2);
    divide(a,b);
    divide(b,a);
    //first = b
    //second = a
}