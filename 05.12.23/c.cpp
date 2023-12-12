#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;cin >> x;
    set<pair<string,int> > st;
    for(int i = 0;i < x;i++){
        string s;cin >> s;
        int n;cin >> n;
        st.insert(make_pair(s,n));
    }
    set<pair<string,int> >::iterator it;
    map<string,int> m;
    for(it = st.begin();it != st.end();it++){
        m[it->first]++;        
    }
    map<string,int>::iterator itt;
    for(itt = m.begin();itt != m.end();itt++){
        if(itt->second < 3){
            cout << itt->first << " NO BONUS\n";
        }else 
            cout << itt->first << " +1\n";
    }
    
}