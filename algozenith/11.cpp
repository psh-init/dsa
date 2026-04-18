#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i=0;i<n;i++) { 
        for(int j=0;j<m;j++){
        cin>>arr[i][j]; }
}
     int sum = 0;
    int col = n-1;
    for(int i=0;i<n;i++){
       sum += arr[i][col];
        col--;
    }
    cout<<sum<<endl;
}

/*
int sum = 0;
for(int i=0;i<n;i++){
   sum += arr[i][n-i-1];
}

cout << sum;*/