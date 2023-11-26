#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    queue<string> q;
    int t;cin >> t;
    while(t--){
        int query;
        string name;
        cin >> query;
        if(query == 1){
            cin >> name;
            q.push(name);
        }else if(query == 2){
            if(!q.empty())
                q.pop();
        }
        if(q.empty()){
            cout << "queue is empty\n";
        }else 
            cout << q.front() << "\n";
    }
}