#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> baseTwo;
    cin >> n;
    if (n == 0){
        cout << 0 << endl;
        return 0;
    }

    while(n) {
        baseTwo.push_back(n % 2);
        n /= 2;
    }
    for(int i = baseTwo.size() -1; i >= 0; i--){
        cout << baseTwo[i];
    }
    cout << endl;
    return 0;
}