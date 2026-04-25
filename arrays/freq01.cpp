#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    // count variable
    int count = 0;
    int target;
    cin>>target;
    for(int i=0;i<n;i++) {
        if(arr[i]==target) {
            count++;
        }
    }
    cout<<count<<endl;
    
}