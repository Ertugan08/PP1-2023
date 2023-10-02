#include <bits/stdc++.h>

using namespace std;
int main() {
    //sort, reversse 
    //sort()
    //int n;cin >> n;
    //int a[n];
    //for(int i = 0;i < n;i++)
    //    cin >> a[i];
    //sort(a+1,a+4);
    //sort(a + l,a + r) --> [l,r)
    //6 5 4 (3 2 1)
    //1 2 3 4 5 6
    //6 4 5 3 2 1
    //6 3 4 5 2 1 
    //sort(a,a+n);
    //reverse(a+l,a+r) --> [l,r)
    //reverse(a+3,a+6);
    //for(int i = 0;i < n;i++)    
    //    cout << a[i] << " ";
    string s;cin >> s;
    //sort(s.begin() + l,s.end() + r) --> [l,r)
    //sort(s.begin()+2,s.begin()+5);
    //sort(s.begin(),s.end()-2);
    //7654321
    //7634521
    //7654321
    //3456721
    // 7654321
    //7634521
    reverse(s.begin()+2,s.end()-2);
    cout << s;
}