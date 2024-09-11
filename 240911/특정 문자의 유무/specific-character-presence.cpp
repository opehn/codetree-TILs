#include <iostream>
using namespace std;

int main() {
    string str;


    cin >> str;

    string a = "ee";
    string b = "ab";
    bool existA = false;
    bool existB = false;
    if (str.find(a) != string::npos) {
        existA = true;
    }
    if (str.find(b) != string::npos) {
        existB = true;
    }

    cout << (existA ? "Yes" : "No") << " " << (existB ? "Yes" : "No") << endl;

    return 0;
}