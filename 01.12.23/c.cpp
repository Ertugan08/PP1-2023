#include<bits/stdc++.h>
using namespace std;

bool check(char c1,char c2){//'1','6' == 16 ?
    int x,x1,x2;
    x1 = (c1-'0');
    x2 = (c2-'0');
    x = x1*10+x2;
    int sqr = sqrt(x);
    //36 --> 6.0 --> 6
    //35 --> 5.978 --> 5
    //sqrt(35) == 5 --> false
    //sqrt(36) == 6 --> true
    return sqr == sqrt(x);
    // if(sqr == sqrt(x))
    //     return true;
    // else 
    //     return false;
}

int main(){
    string s;cin >> s;
    stack<char> st;
    for(int i = 0;i < s.size();i++){//0 push(1)
        if(st.empty())              //1 '6'
            st.push(s[i]);
        else{
            if(check(st.top(),s[i])){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    }   
    if(st.empty()){
        cout << "Stack is empty";
        return 0;
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
}