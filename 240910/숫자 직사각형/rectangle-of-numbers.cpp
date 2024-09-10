#include <iostream>
using namespace std;

int main() {
    int rowLength, colLength = 0;

    cin >> rowLength >> colLength;

    int numArr[rowLength][colLength] = {};

    for (int i = 0; i < rowLength; i++) {
        for (int j = 0; j < colLength; j++) {
            numArr[i][j] = (j + 1) + (colLength * i);
        }
    }
    for (int i = 0; i < rowLength; i++) {
        for (int j = 0; j < colLength; j++) {
            cout << numArr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}