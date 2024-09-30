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
        for(int j = 0; j < n - 1; j++) {
            for(int k = i + 1; k < n; k++) {
                for(int l = 0; l < n - 1; l++) {
                    sum = (arr[i][j] + arr[i][j + 1]) + (arr[k][l] + arr[k][l + 1]);
                    max = sum > max ? sum : max;
                }
            }

        }
    }
    cout << max << endl;
    return 0;
}