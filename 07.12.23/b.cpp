#include<bits/stdc++.h>
using namespace std;

bool com(int i,int j){
    return i == j;
}

int main(){
    int n;cin >> n;
    vector<int> v;
    set<int> s;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        int  y = s.size();
        s.insert(x);
        if(s.size() != y)
            v.push_back(x);
    }
    // for(int i = 0;i < n;i++)
    //         cout << v[i] << " ";
    // while(next_permutation(v.begin(),v.end())){
    //     for(int i = 0;i < n;i++)
    //         cout << v[i] << " ";
    //     cout << endl;
    // }
    do{
        for(int i = 0;i < v.size();i++)
            cout << v[i] << " ";
        cout << endl;
    }while(prev_permutation(v.begin(),v.end()));
}