// #include <bits/stdc++.h>
// #define ll long long 
// using namespace std;

// ll square(ll x){
//     return x * x;
// }

// void hypotenuse(ll a,ll b){
//     double c = sqrt(square(a)+square(b));
//     cout << c;
// }

// int main(){
//     ll a,b;cin >> a >> b;
//     cout << fixed << setprecision(4);
//     hypotenuse(a,b);
// }

#include <bits/stdc++.h> 
using namespace std; 
 
double hypotenuse(int a, int b) { 
     return sqrt(a * a + b * b); 
} 
 
int main() { 
    int a, b; 
    cin>>a>>b; 
    cout<<setprecision(4)<<hypotenuse(a, b); 
    return 0; 
}
