#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    // find duplicate
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++) {
        mp[arr[i]]++;
   }
   for(auto it : mp) {
    if(it.second>1) {
        cout<<it.first<<endl;
    }
   }
    
}