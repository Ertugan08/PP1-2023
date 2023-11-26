#include<bits/stdc++.h>
using namespace std;

bool cmp(string s1,string s2){
    if(s1.size() > s2.size()){
        return false;
    }else if(s1.size() < s2.size())
        return true;
    else{
        if(s1 > s2)
            return false;
        else 
            return true;
    }
}

int main(){
    int n;cin >> n;
    string a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    sort(a,a+n,cmp);
    for(int i = 0;i < n;i++)
        cout << a[i] << " ";
}