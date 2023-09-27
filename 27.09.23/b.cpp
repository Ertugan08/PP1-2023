#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;cin >> n;
    int a[n];
    int m = 0;
    for(int i = 0;i < n;i++)
        cin >> a[i];
    for(int i = 0;i < n;i++){
        if(a[i]%2==0)
            m++;
    }
    cout << m;
}