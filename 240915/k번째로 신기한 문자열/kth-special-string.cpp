#include <iostream>
#include <algorithm>
using namespace std;

bool checkStartBy(string t, string cur){
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
    sort(strs, strs + n);
    for(int i = 0; i < n; i++){
        if(checkStartBy(t, strs[i]))
            cnt++;
        if(cnt == k) {
            cout << strs[i];
            return 0;
        }
    }
    return 0;
}