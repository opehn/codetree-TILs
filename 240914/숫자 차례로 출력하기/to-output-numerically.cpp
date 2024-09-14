#include <iostream>
using namespace std;

void printNumbers1(int n){
    if (n == 0)
        return;

    cout << n << " ";

    printNumbers1(n - 1);

}

void printNumbers2(int n){
    if (n == 0)
        return;

    printNumbers2(n - 1);

    cout << n << " ";
}

int main() {
    int n;

    cin >> n;

    printNumbers2(n);
    cout << endl;
    printNumbers1(n);

    return 0;
}