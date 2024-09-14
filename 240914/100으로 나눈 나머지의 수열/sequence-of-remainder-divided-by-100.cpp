#include <iostream>
using namespace std;

int getNumber(int n) {
    if (n == 1)
        return 2;
    if (n == 2)
        return 4;

    return getNumber(n - 1) * getNumber(n - 2) % 100;

}
int main() {
    int n;
    cin >> n;

    cout << getNumber(n);

    return 0;
}