#include <iostream>
#include <vector>
using namespace std;

int main() {
    int base1, base2;
    string n; 
    cin >> base1 >> base2 >> n;

    int digit = 0;
    for(int i = 0; i < n.length(); i++){
        digit = digit * base1 + (n[i] - '0');
    }

    vector<int> changeBase;

    while(digit){
        changeBase.push_back(digit % base2);
        digit /= base2;
    }

    for(int i = changeBase.size() - 1; i >= 0; i--) {
        cout << changeBase[i];
    }
    cout << endl;
    return 0;
}