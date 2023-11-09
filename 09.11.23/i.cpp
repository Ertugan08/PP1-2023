#include<bits/stdc++.h>
#include<set>

using namespace std;

int main (){
    string s;cin >> s;
    set<char> st;
    for(int i = 0;i < s.size();i++){
        st.insert(tolower(s[i]));
    }
    cout << st.size() << "\n";
    set<char>::iterator it;
    for(it = st.begin();it != st.end();it++){
        cout << *it << ' ';
    }
}