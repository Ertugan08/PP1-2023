#include <iostream>
#define ll long long
using namespace std;
int main() {
    int a,b,c;cin >> a >> b >> c;
    if(a >= 99 and a <= 699 and b >= 99 and b <= 699 and c >= 99 and c <= 699){

    }else{
        cout << "Error";   
        return 0;
    }

    if(a >= b and a >= c)
        cout << a;
    else if(b >= a and b >= c)
        cout << b;
    else if(c >= a and c >= b)
        cout << c;
}