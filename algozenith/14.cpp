#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> arr[i][j];

    vector<vector<int>> transpose(m, vector<int>(n));

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            transpose[j][i] = arr[i][j];

    for(int i=0;i<m;i++)
        reverse(transpose[i].begin(), transpose[i].end());

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout << transpose[i][j] << " ";
        cout << endl;
    }
}