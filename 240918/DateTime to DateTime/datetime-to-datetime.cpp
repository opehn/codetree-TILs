#include <iostream>
using namespace std;

#define TEST_HOUR 11
#define TEST_MINUTE 11
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < 11 || (a == 11 && b < 11) || a == 11 && b == 11 && c < 11){
        cout << -1 << endl;
        return 0;
    }

    int elapsed1, elapsed2;
    a -= 11;
    elapsed1 = TEST_HOUR * 60 + TEST_MINUTE;
    elapsed2 = a * 60 * 24 + b * 60 + c;

    cout << elapsed2 - elapsed1 << endl;
    return 0;
}