#include <iostream>
using namespace std;

const int SQUARE_LENGTH = 3;
int main() {
    int arrA [SQUARE_LENGTH][SQUARE_LENGTH] = {};
    int arrB [SQUARE_LENGTH][SQUARE_LENGTH] = {};

    for (int i = 0; i < SQUARE_LENGTH; i++) {
        for (int j = 0; j < SQUARE_LENGTH; j++) {
            cin >> arrA[i][j];
        }
    }

    for (int i = 0; i < SQUARE_LENGTH; i++) {
        for (int j = 0; j < SQUARE_LENGTH; j++) {
            cin >> arrB[i][j];
        }
    }

    for (int i = 0; i < SQUARE_LENGTH; i++) {
        for (int j = 0; j < SQUARE_LENGTH; j++) {
            cout << (arrA[i][j] * arrB[i][j]) << " ";
        }
        cout << endl;
    }
    return 0;
}