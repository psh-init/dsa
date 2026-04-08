#include <bits/stdc++.h>
using namespace std;
void solution() {
    const long long MOD = 1e9+7;
    long long n;
    cin>>n;
    vector <long long> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    long long product = 1;
    for(int i=0;i<n;i++) {
        product = (product * arr[i]) %MOD;
    }
    cout<<product<<'\n';
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