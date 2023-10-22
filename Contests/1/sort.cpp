#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define fori(n) for(ll i = 0;i < n;i++)
#define fori1(n) for(ll i = 1;i <= n;i++)
#define forj(n) for(ll j = 0;j < n;j++)
#define forj1(n) for(ll j = 1;j <= n;j++)
#define mp make_pair
#define pb push_back
#define all(p) p.begin(),p.end()
#define MAX 2*10000
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0) 
using namespace std;
int main() {
    //freopen("write.txt","r", stdin);
    //freopen("read.txt","w",stdout);
    int n;cin >> n;
    int a[n*n];
    for(int i = 0;i < n*n;i++){
        cin >> a[i];
    }
    sort(a,a+n*n);

    for(int i = 0;i < n*n;i++){
        cout << a[i] << " ";
        if((i+1)%n == 0)
            cout << endl;
    }
}