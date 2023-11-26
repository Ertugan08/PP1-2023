#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(){
    queue<int> q;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        q.push(x);
    }
    cout << "\n" << q.size() << "\n";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}