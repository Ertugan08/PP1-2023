#include <bits/stdc++.h>

using namespace std;

void Range(int * a,int l,int r,int ind){
    if(ind > r)
        return;
    cout << a[ind] << " ";
    Range(a,l,r,ind + 1);
}

int main() {
    int n;cin >> n;
    //5
    //3 4 5 6 7
    //1 3
    //4 5 6
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    int l,r;cin >> l >> r;
    Range(a,l,r,l);
}