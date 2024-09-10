#include <iostream>
using namespace std;

const int ROW_LENGTH = 5;
const int COL_LENGTH = 3;
int main() {
    char cur = 0;

    for (int i = 0; i < ROW_LENGTH; i++) {
        for (int j = 0; j < COL_LENGTH; j++) {
            cin >> cur;
            cout << static_cast<char>(cur - ('a' - 'A')) << " ";
        }
        cout << endl;
    }
    return 0;
}