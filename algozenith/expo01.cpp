#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll expo(ll a, ll x, ll p) {
    ll ans = 1;
    while (x) {
        if (x % 2) {
            ans = ((ans % p) * (a % p)) % p;
        }
        a = ((a % p) * (a % p)) % p;
        x = x / 2;
    }
    return ans;
}

void solve() {
    ll a, b, c, p;
    cin >> a >> b >> c >> p;

    if (b == 0 && c == 0) {
        cout << a % p << '\n';   // A^(0^0) = A^1
    } 
    else if (b == 0) {
        cout << "1\n";           // A^0 = 1
    } 
    else if (a % p == 0) {
        cout << "0\n";           // multiple of P
    } 
    else {
        ll res = expo(b, c, p - 1);
        if (res == 0) res = p - 1;  
        cout << expo(a, res, p) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}