#include <iostream>
using namespace std;

const int LENGTH = 4;
int main() {
    int a[LENGTH][LENGTH];

    int num, sum = 0;
    for (int i = 0; i < LENGTH; i++) {
        for (int j = 0; j < LENGTH; j++) {
            cin >> num;
            sum += num;
        }
        cout << sum << endl;
        sum = 0;
    }
    return 0;
}