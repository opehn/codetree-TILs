#include <iostream>
using namespace std;

bool inRange(int r, int c, int maxRow, int maxCol){
    return (r >= 0 && r < maxRow && c >= 0 && c < maxCol);
}

int main() {
    int n, m;
    cin >> n >> m;

    int dr[4] = {0, 1, 0, -1};
    int dc[4] = {1, 0, -1, 0};
    int grid[n][m] = {};
    int nr = 0, nc = 0, r = 0, c = 0;
    int dir_num = 0;
    int cur = 1;
    int cnt = 0;
    grid[0][0] = cur; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            nr = r + dr[dir_num], nc = c + dc[dir_num];
            if(inRange(nr, nc, n, m) && grid[nr][nc] == 0) {
                r = nr, c = nc;
            } else {
                dir_num = (dir_num + 1) % 4;
                r = r + dr[dir_num], c = c + dc[dir_num];
            }
            cur += 1;
            grid[r][c] = cur;
            cnt++;
            if (cnt == n * m - 1) break;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}