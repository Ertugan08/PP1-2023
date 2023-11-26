#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
   stack<char> st;
   string s;cin >> s;
   for(int i = 0;i<s.size();i++){
        if(s[i] == '1'){
            if(st.empty() || st.top() == '0'){
                st.push(s[i]);
            }else 
                st.pop();
        }else 
            st.push(s[i]);
   }
   vector<char> v;
    while(!st.empty()){
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(),v.end());
    for(int i = 0;i < v.size();i++){
        cout << v[i];
    }
}