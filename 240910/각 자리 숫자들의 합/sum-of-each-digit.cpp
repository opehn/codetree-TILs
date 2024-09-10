#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int sum = 0;
    cin >> n; 

    while (n) {
        int digit = 0;

        digit = n % 10;
        sum += digit;
        n = n / 10; 
    }
    cout << sum << endl;
    return 0;
}