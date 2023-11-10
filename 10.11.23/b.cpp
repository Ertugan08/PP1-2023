#include <bits/stdc++.h>

using namespace std;

bool IsPal(string s){
    string z = s;
    reverse(z.begin(),z.end());
    if(z == s)
        return true;
    else 
        return false;
}

int main() {
    string s;
    set<string> st;
    while(cin >> s){
        //st.inser
        if(!IsPal(s))
            st.insert(s);
    }
    set<string>::iterator it;
    for(it = st.begin();it != st.end();it++)
        cout << *it << "\n";
}