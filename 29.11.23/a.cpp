#include<bits/stdc++.h>
using namespace std;


int main(){
    queue<int> f,s;
    for(int i = 0;i < 5;i++){
        int x;cin >> x;
        f.push(x);
    }
    for(int i = 0;i < 5;i++){
        int x;cin >> x;
        s.push(x);
    }
    int cnt = 0;
    while(true){
        if(f.empty()){
            cout << "second " << cnt;
            return 0;
        }
        if(s.empty()){
            cout << "first " << cnt;
            return 0;
        }
        if(cnt > 1000000){
            cout << "botva";
            return 0;
        }
        if((f.front() > s.front() and !(f.front() == 9 and s.front()==0)) or (f.front() == 0 and s.front() == 9)){
            f.push(f.front());
            f.push(s.front());
            f.pop();
            s.pop();
        }else{
            s.push(f.front());
            s.push(s.front());
            s.pop();
            f.pop();
        }
        cnt++;
    }
}