#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin >> arr[i];
    //i = 0,..,n-1
    //ind = 0,..,n-1

    for(int i = 0;i < n;i++){
    //    cout << arr[i] << " ";
        if(i % 2 == 0)
            cout << arr[i] << " ";
    }

}