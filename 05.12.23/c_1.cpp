#include <bits/stdc++.h> 
using namespace std; 
 
int main() { 
    map <string, set <int> >m; 
 int n; 
 cin >> n; 
 for (int i = 0; i < n; i++){ 
  string s; 
  int k; 
  cin >> s >> k; 
  m[s].insert(k); 
 } 
 for (auto s : m) { 
  cout << s.first << " "; 
  if (s.second.size() < 3) 
   cout << "NO BONUS" << endl; 
  else  
    cout << "+1" << endl; 
 } 
}