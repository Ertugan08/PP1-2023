#include <bits/stdc++.h>

using namespace std;
//"hello" + string

void hello(string s){
    cout << "hello " << s;
}

void sum_digit(int a){
    int sum = 0;
    while(a != 0){
        sum += (a%10);//3,2,1
        a/=10;//12,1,0
    }
    cout << sum;
}

//Sum_digit_of_number
//SumDigitOfNumber

int main(){
    string s;
    int m;
    //cin >> s;
    //Ertu hello
    //hello(s);
    int n;cin >> n;
    sum_digit(n);

}