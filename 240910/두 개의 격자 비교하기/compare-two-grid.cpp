#include <iostream>
using namespace std;

int main() {
    int rowLength, colLength = 0;
    
    cin >> rowLength >> colLength;

    int arrA[rowLength][colLength] = {};
    int arrB[rowLength][colLength] = {};

    for (int i = 0; i < rowLength; i++) {
        for (int j = 0; j < colLength; j++) {
            cin >> arrA[i][j];
        }
    }

    for (int i = 0; i < rowLength; i++) {
        for (int j = 0; j < colLength; j++) {
            cin >> arrB[i][j];
        }
    }
    
    for (int i = 0; i < rowLength; i++) {
        for (int j = 0; j < colLength; j++) {
            cout << (arrA[i][j] != arrB[i][j]) << " ";
        }
        cout << endl;
    }
    return 0;
}