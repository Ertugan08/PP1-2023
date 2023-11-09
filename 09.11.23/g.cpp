#include<bits/stdc++.h>
#include<set>

using namespace std;

int main (){
    set<int> s;
    int n;cin >> n;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        s.insert(x);
    }
    int even = 0,odd = 0;
    set<int>::iterator it;
    for(it = s.begin();it!=s.end();it++){
        if(*it%2==0)
            even++;
        else 
            odd++;
    }
    cout << "Even: " << even << "\n" << "Odd: "<<odd;
}