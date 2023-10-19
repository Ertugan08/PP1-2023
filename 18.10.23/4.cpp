#include <bits/stdc++.h>

using namespace std;


int Sum(int a,int b){
    //cout << a+b;
    int c = a + b;
    return c;
}

int sum_digit(int a){
    int sum = 0;
    while(a != 0){
        sum += (a%10);//3,2,1
        a/=10;//12,1,0
    }
    return sum;
}

int main(){
    int n;cin >> n;
    int summ = sum_digit(n);
    if(summ % 2 == 0)
        cout << "Even";
    else 
        cout << "Odd";
}