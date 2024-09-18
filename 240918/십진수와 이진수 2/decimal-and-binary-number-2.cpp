#include <iostream>
#include <vector>
using namespace std;

int main() {
    string n;
    cin >> n; 

    int digit = 0;
    for(int i = 0; i < n.length(); i++){
        digit = digit * 2 + (n[i] - '0');
    }
    digit *= 17;

    vector<int> binary; 
    while(digit) {
        binary.push_back(digit % 2);
        digit /= 2;
    }

    for(int i = binary.size() - 1; i >= 0; i--){
        cout << binary[i];
    }
    return 0;
}