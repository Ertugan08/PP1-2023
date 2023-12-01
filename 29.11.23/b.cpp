#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fori(n) for(i = 0;i < n;i++)
#define fori1(n) for(i = 1;i <= n;i++)
#define forj(n) for(j = 0;j < n;j++)
#define forj1(n) for(j = 1;j <= n;j++)
#define mp make_pair
#define pb push_back
#define MAX 100010
#define elif else if
#define INF 1000000000
ll i,j;

struct stuck{
    int a[100];
    int n;
    stuck(){
        n = 0;
    }
    int size(){
        return n;
    }
    void push(int x){
        a[n] = x;
        n++;
    }
    void pop(){
        if(n>0){
            cout << a[n-1] << "\n";
            n--;
        }
        else
            cout << "error\n";
    }
    void top(){
        if(n>0)
            cout << a[n-1] << "\n";
        else
            cout << "error\n";
    }
    void clear(){
        n = 0;
    }
};
stuck st;
string s;
int n;
int main(){
        while(true){
            cin >> s;
            if(s == "size")
                cout << st.size() << "\n";
            if(s == "push"){
                cin >> n;
                st.push(n);
                cout << "ok\n";
            }
            if(s == "pop")
                st.pop();
            if(s == "back")
                st.top();
            if(s == "clear"){
                st.clear();
                cout << "ok\n";
            }
            if(s == "exit"){
                cout << "bye\n";
                break;
            }
        }
}