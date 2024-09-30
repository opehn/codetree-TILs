#include <iostream>
#include <climits>
using namespace std;

#define MAX_N 20

int main() {
    int n;
    cin >> n;

    int grid[MAX_N][MAX_N];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    int sum = 0;
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 2; j++) {
            sum += grid[i][j];
            sum += grid[i][j + 1];
            sum += grid[i][j + 2];

            max = sum > max ? sum : max;
            sum = 0;
        }
    }

    cout << max << endl;
    return 0;
}