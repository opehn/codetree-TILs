#include <iostream>
using namespace std;

bool isMinus(int num){
    return num < 0;
}

int main() {
    int n;
    cin >> n;

    int cnt = 1;
    int max = 0;
    int cur;
    int prev = 0;
    for(int i = 0; i < n; i++){
        cin >> cur;
        if (isMinus(cur) == isMinus(prev)) {
            cnt++;
        } else {
            max = cnt > max ? cnt : max;
            cnt = 1;
        }
        prev = cur;
    }

    max = cnt > max ? cnt : max;

    cout << max << endl;
    return 0;
}