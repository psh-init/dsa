#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int mx= arr[0];
    for(int i=1;i<n;i++) {
        if(arr[i]>mx) {
            mx = arr[i];
        }
    }
    int second = INT_MIN;
    for(int i=0;i<n;i++) {
        if(arr[i] != mx && arr[i]>second) {
            second = arr[i];
        }
    }
    if(second == INT_MIN) cout<<-1<<endl;
    else cout<<second<<endl;
}