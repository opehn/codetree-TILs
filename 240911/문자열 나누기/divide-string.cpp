#include <iostream>
using namespace std;

const int SPLIT_NUM = 5;
int main() {
    int n = 0;

    cin >> n;
    string arrStr[n];

    for(int i = 0; i < n; i++) {
        cin >> arrStr[i];
    }

    int curLength = 0;
    int sumLength = 0;
    for (int i = 0; i < n; i++) {
        curLength = arrStr[i].length();
        if (curLength + sumLength <= SPLIT_NUM) {
            cout << arrStr[i];
            sumLength += curLength;
        } else {
            int remain = SPLIT_NUM - sumLength;
            int j = 0;
            while (remain--) {
                cout << arrStr[i][j++];
            }
            cout << endl;
            sumLength = 0;
 
            int lastIdx = arrStr[i].length() - 1;
            arrStr[i] = arrStr[i].substr(j, lastIdx);
            i--;
        }

    }
    return 0;
}