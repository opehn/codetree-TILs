#include <iostream>
using namespace std;

#define STRING_LENGTH 5
int main() {
    string arrStr[STRING_LENGTH] = {"apple", "banana", "grape", "blueberry", "orange"};

    char toFind;
    cin >> toFind;
    
    int matched = 0;
    for(int i = 0; i < STRING_LENGTH; i++) {
        if(arrStr[i][2] == toFind || arrStr[i][3] == toFind) {
            cout << arrStr[i] << endl;
            matched++;
        }
    }

    cout << matched << endl;
    return 0;
}