#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int blocks[n] = {};

    int start, end;
    for(int i = 0; i < k; i++){
        cin >> start >> end;
        for(int i = start - 1; i < end; i++) {
            blocks[i]++;
        }
    }
    
    int max = 0;
    for(int i = 0; i < n; i++) {
        max = blocks[i] > max ? blocks[i] : max;
    }

    cout << max << endl;
    return 0;
}