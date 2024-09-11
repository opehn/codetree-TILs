#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;

    cin >> input;

    char cur;
    for(int i = 0; i < input.length(); i++) {
        cur = input[i];
        if (cur >= 'a' && cur <= 'z') {
            cur = cur - 'a' + 'A';
        } else {
            cur = cur - 'A' + 'a';
        }
        cout << cur;
    }
    return 0;
}