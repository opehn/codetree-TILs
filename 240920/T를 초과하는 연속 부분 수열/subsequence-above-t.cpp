#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int cur;
    int cnt = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        cin >> cur;
        if (cur > t) {
            cnt++;
        } else {
            max = cnt > max ? cnt : max;
            cnt = 0;
        }
    }
    max = cnt > max ? cnt : max;

    cout << max << endl;
    return 0;
}