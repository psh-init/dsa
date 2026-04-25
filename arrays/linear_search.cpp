#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int ans = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==target) {
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
}