#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cur;
    int prev = 0;
    int cnt = 0;
    int max = 0;
    for(int i = 0; i < n; i++){
        cin >> cur;
        if (cur == prev) {
            cnt++;
        } else {
            max = cnt > max ? cnt : max; 
            cnt = 0;
        }
        prev = cur;
    }
    max = cnt > max ? cnt : max;     
    cout << max + 1 << endl;
    return 0;
}