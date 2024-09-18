#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    vector<int> changeBase;
    while(n) {
        changeBase.push_back(n % b);
        n /= b;
    }
    for(int i = changeBase.size() - 1; i >= 0; i--){
        cout << changeBase[i];
    }
    return 0;
}