#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    int cnt = 0;
    for(int i = 0;i < n;i++){
        bool flag = false;
        // a[i] 
        // j = 2,..,a[i]-1
        // (a[i] % j != 0) --> for all j
        // (a[i] % j == 0) --> true
        // a[i] + 1 ,a[i] + 2
        //  
        for(int j = 2;j < a[i];j++){
            if(a[i] % j == 0)
                flag = true;
        }
        if(!flag and a[i] != 1)
            cnt++;
    }
    cout << cnt << " ";
}