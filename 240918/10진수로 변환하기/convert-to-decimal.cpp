#include <iostream>
#include <vector>
using namespace std;

int main() {
    int binary;
    cin >> binary;


    vector<int> digit;
    while(binary) {
        digit.push_back(binary % 10);
        binary /= 10;
    }

    int ten = 0;
    for(int i = digit.size() - 1; i >= 0; i--){
        ten = ten * 2 + digit[i];
    }
    cout << ten << endl;
    return 0;
}