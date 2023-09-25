#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n,m;
    cin >> n >> m;
    int  a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    if(a[n-1] < m){
        cout << n;
        return 0;   
    }
    for(int i = 0;i < n;i++){
        if(a[i] > m){
            cout << i << " ";
            return 0;
            // break -> цикл
            //return 0 -> программа
        }
        if(a[i] == m){
            cout << i;
            return 0;
        }
    }
}