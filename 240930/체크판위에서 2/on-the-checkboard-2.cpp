#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n = 5;
    int arr[5][5] = {{1, 0, 0, 0, 0},
                 {0, 1, 0, 0, 0},
                 {0, 1, 1, 0, 1},
                 {0, 0, 0, 1, 0},
                 {0, 0, 0, 0, 0}};


    int cnt = 0;
    int sum = 0;
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = 0; j < n; j++) {
                cout << "i : " << i << " j : " << j << " k : " << k << endl;
                sum = arr[i][j] + arr[j][k];
            }
            max = sum > max ? sum : max;
            sum = 0;
        }
    }
    cout << max << endl;
    return 0;
}