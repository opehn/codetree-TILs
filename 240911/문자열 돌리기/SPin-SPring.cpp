#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.length() + 1; i++) {
        cout << str << endl;
        str = str.substr(str.length() - 1, 1) + str.substr(0, str.length() - 1); 
    }
    return 0;
}