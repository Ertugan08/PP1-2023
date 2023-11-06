#include <bits/stdc++.h>

using namespace std;

int sum[100000001];
int ans[1001];

int main() {
    int n;cin >> n;
    int a[n];
    for(int i = 0;i < n;i++)
        cin >> a[i];
    for(int i = 0;i < n;i++){
        //7
        //1 9 4 8 2 8 1
        //0 1 2 3 4 5 6
        //a[0] = 1
        //a[1] = 9
        sum[a[i]]++;
    }
    int mx = INT_MIN;
    for(int i = 0;i < 1001;i++){
        mx = max(mx,sum[i]);
    }
    int cnt = 0;
    for(int i = 0;i < 1001;i++){
        if(mx == sum[i]){
            ans[cnt] = i;
            cnt++;
        }
    }
    sort(ans,ans+cnt);
    reverse(ans,ans+cnt);
    for(int i = 0;i < cnt;i++)
        cout << ans[i] << " ";
}