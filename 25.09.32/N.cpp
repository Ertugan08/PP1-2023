#include <iostream>
#define ll long long
using namespace std;
int main() {
    int n;cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    //5
    //0,1,2,3,4 
    //0,1,2,3,4,5
    for(int i = 0;i < n;i++){
        //f(x) = x^2;
        //x y
        //1 1
        //2 4
        //3 9
        //5
        //0 1 2  3  4
        //6 7 15 6 11
        //i a[i]
        //0 6
        //1 7
        //2 15
        //3 6 
        //4 11
        //0,1,2,3,4,5 // i
        //             
        int x = arr[i]* arr[i];
        cout << x << " ";
    }
}