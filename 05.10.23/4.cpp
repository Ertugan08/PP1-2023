#include <bits/stdc++.h>
using namespace std;
int main (){
    int a,b;cin >> a >> b;
    int ans = 0;
    //6 27
    //i /= (>i)
    //6
    //1 2 3 4 5 6   
    for(int i = 1;i <= min(a,b);i++){
        if(a%i == 0 and b % i == 0){
            ans = i;
        }
    }    
    cout << ans;
}