#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int line[200] = {};
    int x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        x += 100;
        y += 100; 

        for(int i = x - 1; i < y - 1; i++) {
            line[i]++;
        }
    }

    int max = 0;
    for(int i = 0; i < 200; i++) {
        max = line[i] > max ? line[i] : max;
    }

    cout << max;
    return 0;
}