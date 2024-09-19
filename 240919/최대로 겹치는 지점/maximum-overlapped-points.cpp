#include <iostream>
using namespace std;

#define MAX_LENGTH 100
int main() {
    int n;
    cin >> n;

    int x, y;
    int line[MAX_LENGTH] = {};
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        for(int i = x - 1; i < y; i++){
            line[i]++;
        }
    }

    int max = 0;
    for(int i = 0; i < MAX_LENGTH; i++){
        max = line[i] > max ? line[i] : max;
    }

    cout << max << endl;
    return 0;
}