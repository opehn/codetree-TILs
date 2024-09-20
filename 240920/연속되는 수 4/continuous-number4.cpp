#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int max = 0;
    int cur;
    int prev = 1001;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        cin >> cur;
        if(cur > prev) {
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