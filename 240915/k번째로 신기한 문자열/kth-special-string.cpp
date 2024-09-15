#include <iostream>
#include <algorithm>
using namespace std;

bool checkStartWith(string t, string cur){
    if(t.length() > cur.length())
        return false;
    for(int i = 0; i < t.length(); i++) {
        if(t[i] != cur[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, k;
    string t;

    cin >> n >> k >> t;

    string strs[n];
    for(int i = 0; i < n; i++){
        cin >> strs[i];
    }

    int cnt = 0;
    string words[n];
    for(int i = 0; i < n; i++){
        if(checkStartWith(t, strs[i])){
            words[cnt++] = strs[i];        
        }
    }
    sort(words, words + cnt);
    cout << words[k -1];
    return 0;
}