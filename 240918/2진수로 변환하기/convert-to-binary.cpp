#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> baseTwo;
    cin >> n;

    while(n) {
        baseTwo.push_back(n % 2);
        n /= 2;
    }
    for(int i = baseTwo.size() -1; i >= 0; i--){
        cout << baseTwo[i];
    }
    return 0;
}