#include<bits/stdc++.h>
using namespace std;

// bool cmp(pair<string,int> p1,pair<string,int> p2){
//p1.first,p1.second,p2.first,p2.second
//     if(p1.second < p2.second)
//         return true;
//     else if(p1.second > p2.second)
//         return false;
//     else{
//         if(p1.first > p2.first)
//             return false;
//         else    
//             return true;
//     }
// }
bool cmp(pair<string,int> p1,pair<string,int> p2){
    if(p1.second != p2.second)
        return p1.second < p2.second;
    else 
        return p1.first < p2.first;
}
int main(){
    int n;cin >> n;
    pair<string,int> a[n];
    for(int i = 0;i < n;i++){
        string s;cin >> s;
        int m;cin >> m;
        a[i] = make_pair(s,m);
    }
    sort(a,a+n,cmp);
    for(int i = 0;i < n;i++)
        cout << a[i].first << " " << a[i].second << "\n";
}