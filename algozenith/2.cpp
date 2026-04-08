#include <bits/stdc++.h>
using namespace std;

string cameltoSnake(string s) {
    string result = "";
    
    for(int i = 0; i < s.length(); i++) {
        if(isupper(s[i])) {
            if(i != 0) result += '_';
            result += tolower(s[i]);
        }
        else {
            result += s[i];  
        }
    }
    
    return result;
} 

int main() {
    int t;
    cin>>t;
    while(t--) {
    string s;
    cin>>s;
    cout<<cameltoSnake(s)<<endl;
    }
}
