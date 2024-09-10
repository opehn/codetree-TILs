#include <iostream>
using namespace std;

const int SQUARE_LENGTH = 4;
int main() {

    int sum = 0;
    int cur = 0;

    for (int i = 0; i < SQUARE_LENGTH; i++) {
        for (int j = 0; j < SQUARE_LENGTH; j++) {
            cin >> cur;
            if (j <= i)  {
                sum += cur;
            }
        }
    }
    cout << sum << endl;
    return 0;
}