#include<iostream>
#include<stack>
#include<queue>

using namespace std;
//((())))

//(((

//)
//((

//)
//(

//)
//

//)
//NO

//(((()))

//(
int main(){
   stack<int> st;
   string s;cin >> s;
   for(int i = 0;i<s.size();i++){
    if(s[i] == '('){
        st.push(s[i]);
    }else if(s[i] == ')'){
        if(st.empty()){
            cout << "NO\n";
            return 0;
        }else{
            st.pop();
        }
    }
   } 
    if(st.empty())
        cout << "YES";
    else 
        cout << "NO";
}