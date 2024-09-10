#include <iostream>
#include <iomanip>

using namespace std;

const int ROW_LENGTH = 2;
const int COL_LENGTH = 4;
int main() {
    double rowSum[2] = {};
    double colSum[4] = {};
    double totalSum = 0;

    int cur = 0;
    for (int i = 0; i < ROW_LENGTH; i++) {
        for (int j = 0; j < COL_LENGTH; j++) {
            cin >> cur;
            rowSum[i] += cur;
            colSum[j % 4] += cur;
            totalSum += cur;
        }
    }

    cout << fixed << setprecision(1);
    for (int i = 0; i < ROW_LENGTH; i++) {
        cout << rowSum[i] / COL_LENGTH << " ";
    }
    cout << endl;
    
    for (int j = 0; j < COL_LENGTH; j++) {
        cout << colSum[j] / ROW_LENGTH << " ";
    }
    cout << endl;

    cout << totalSum / (COL_LENGTH * ROW_LENGTH) << endl;
    

    return 0;
}