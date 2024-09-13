#include <iostream>
using namespace std;

int sum(int n) {
    if (n == 2 || n == 1)
        return n;
    return sum(n - 2) + n;
}

int main() {
    int n;

    cin >> n;

    cout << sum(n);
    return 0;
}