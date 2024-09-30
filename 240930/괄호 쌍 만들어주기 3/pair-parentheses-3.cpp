#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    int cnt = 0;
    for(int i = 0; i < str.length(); i++){
        if (str[i] != '(') continue;
        for(int j = i + 1; j < str.length(); j++){
            if (str[j] == ')') {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}