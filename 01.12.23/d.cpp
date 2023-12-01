#include<bits/stdc++.h>
using namespace std;

int main(){
    int days;cin >> days;
    map<string,double> M;
    double sum = 0;
    while(days--){
        int m;cin >> m;
        for(int i = 0;i < m;i++){
            string city;cin >> city;
            double x;cin >> x;
            M[city] += x;
            sum += x;
        }
    }
    map<string,double>:: iterator it;
    for(it = M.begin();it != M.end();it++){
        cout << it->first << " " << (it->second/sum)*100 << "\n";
    }
}