#include<bits/stdc++.h>
using namespace std;

double GetPriceQualityRatio(int price,int quality){
    return (price*1.0)/(quality*1.0);
}

int main(){
    int n;cin >> n;
    vector<pair<string,double> > v;
    string s;
    int p,q;
    for(int i = 0;i < n;i++){
        cin >> s >> p >> q;
        v.push_back(make_pair(s,GetPriceQualityRatio(p,q)));
    }
    double min = INT_MAX;
    for(int i = 0;i < n;i++){
        if(min > v[i].second){
            
            min = v[i].second;
      //      cout << min << " ";
        }
    }

    //cout << min;
    for(int i = 0;i < n;i++){
        if(v[i].second == min){
            cout << v[i].first;
            return 0;
        }
    }
}