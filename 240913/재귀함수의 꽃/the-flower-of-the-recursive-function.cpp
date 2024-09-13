#include <iostream>
using namespace std;

void printNumber(int n) {
    if(n == 0)
        return;
    cout << n << " ";
    printNumber(n - 1);
    cout << n << " ";
}

int main() {
    int n = 0;

    cin >> n;
    printNumber(n);

    return 0;
}