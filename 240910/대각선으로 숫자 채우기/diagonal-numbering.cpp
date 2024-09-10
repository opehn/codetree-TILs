#include <iostream>
using namespace std;

int main() {
    int rowLength, colLength = 0;

    cin >> rowLength >> colLength;

    int numArr[rowLength][colLength] = {};
    int count = 1;

    for (int i = 0; i < rowLength; i++) {
        for (int j = 0; j < colLength; j++) {
            if(!numArr[i][j]) {
                int curRow = i;
                int curCol = j;
                while(curRow < rowLength && curCol >= 0) {
                    numArr[curRow++][curCol--] = count++;
                }
            }
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