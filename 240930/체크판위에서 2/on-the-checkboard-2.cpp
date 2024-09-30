#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_LENGTH 15
int main() {
    int n, m;
    cin >> n >> m;

    char grid[MAX_LENGTH][MAX_LENGTH];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int cnt = 0;
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            for(int k = i + 1; k < n - 1; k++) {
                for(int l = j + 1; l < m - 1; l++) {
                    if(grid[0][0] != grid[i][j] &&
                        grid[i][j] != grid[k][l] &&
                        grid[k][l] != grid[n - 1][m - 1]) {
                            cnt++;
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}