#include <iostream>
using namespace std;

void printStar(int n) {
    if (!n)
        return;

    printStar(n - 1); 
    cout << "HelloWorld" << endl;;
}

int main() {
    int n; 

    cin >> n;
    printStar(n);

    return 0;
}