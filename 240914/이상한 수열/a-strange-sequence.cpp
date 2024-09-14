#include <iostream>
using namespace std;

int getNumber(int n) {
    if (n == 1)
        return 1; 
    if (n == 2)
        return 2;
    
    return (getNumber(n / 3) + getNumber(n - 1));
}

int main() {
    int n;
    
    cin >> n;

    cout << getNumber(n);
    return 0;
}