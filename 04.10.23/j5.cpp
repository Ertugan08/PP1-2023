#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;    
    for(int i = 0;i < s.size()/2;i++){
        if(s[i] != s[s.size()-i-1]){
            for(int j = i;j < s.size()/2;j++){
                if(s[j] != s[s.size()-j-2]){
                //    cout << s[j] << " " << s[s.size()-j-2] << "\n";
                    cnt++;
                    break;
                }   
            }
            for(int j = i;j < s.size()/2;j++){
                //cout << s[j] << " " << s[s.size()-j-2] << "\n";
                if(s[j+1] != s[s.size()-j-1]){
                    cnt++;
                    break;
                }
            }
            break;
        }
    }
    if(cnt == 2)
        cout << "NO";
    else 
        cout << "YES";
}