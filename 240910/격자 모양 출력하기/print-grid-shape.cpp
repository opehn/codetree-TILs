#include <iostream>
using namespace std;

int main() {
    int size, num = 0;
    cin >> size >> num;

    int numArr[size][size] = {};
    int curX, curY = 0;
    int val = 0;
    for(int i = 0; i < num; i++) {
        cin >> curX >> curY;
        val = curX * curY;
        numArr[curX - 1][curY - 1] = val;
    }
    
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cout << numArr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}