#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;

    cin >> A >> B;
    
    string normal = A + B;
    string reverse = B + A;

    cout << stoi(normal) + stoi(reverse) << endl;
    return 0;
}