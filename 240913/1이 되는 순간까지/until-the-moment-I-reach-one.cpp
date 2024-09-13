#include <iostream>
using namespace std;

int Div(int n) {
    if (n  == 1)
        return 0;
    
    if (n % 2 == 0) {
        return Div(n / 2) + 1;
    } 

    if (n % 2 == 1) {
        return Div(n / 3) + 1;
    }
    
}

int main() {
   int n = 0;

   cin >> n;

    cout << Div(n);
   return 0;
}