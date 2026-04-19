#include <bits/stdc++.h>
using namespace std;
void solution() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    bool found = false;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j] == target) {
                found = true;
            }
        }
    }
    if(found) cout<<"will not take number\n";
    else cout<<"will take number\n";
    
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
      solution();
    }
    return 0;
} 