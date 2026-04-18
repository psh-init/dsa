#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){ 
            if(arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
        bubble_sort(arr, n);
        for(int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}

// sorting using bubble, we dont use built function sort, we have to implement our own sorting algorithm, here we are using bubble sort, which is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.