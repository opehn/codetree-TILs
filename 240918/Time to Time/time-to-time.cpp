#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int elapsed1 = a * 60  + b;
    int elapsed2 = c * 60 + d;

    cout << elapsed2 - elapsed1;
    return 0;
}