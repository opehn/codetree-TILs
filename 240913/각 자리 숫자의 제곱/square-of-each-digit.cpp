#include <iostream>
using namespace std;

int F(int n) {
    if (n < 10) 
        return n;
    return F(n - 1) * n;
    
}

int main() {
    cout << F(n);
    return 0;
}