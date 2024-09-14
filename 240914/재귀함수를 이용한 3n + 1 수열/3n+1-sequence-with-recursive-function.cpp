#include <iostream>
using namespace std;

int count(int n) {
    if (n == 1)
        return 0;
    if(n % 2 == 0) {
        return (count(n / 2) + 1);
    } else {
        return (count(n * 3 + 1) + 1);
    }
    
}

int main() {
    int n;

    cin >> n;

    cout << count(n);
    return 0;
}