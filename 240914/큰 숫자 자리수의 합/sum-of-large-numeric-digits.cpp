#include <iostream>
using namespace std;

int sumDigit(int num){
    if (!num)
        return 0;

    return (sumDigit(num / 10) + num % 10);
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int mul = a * b * c;

    cout << sumDigit(mul);

    return 0;
}