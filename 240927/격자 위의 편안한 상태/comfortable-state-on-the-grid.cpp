#include <iostream>
using namespace std;

bool inRange(int r, int c, int n){
    return (r >= 0 && r < n && c >= 0 && c < n);
}
int main() {
    int n, m;
    cin >> n >> m;

    int grid[n][n] = {};
    int r, c;
    int aroundR = 0, aroundC = 0;
    int dr[4] = {0, 1, 0, -1};
    int dc[4] = {1, 0, -1, 0};
    int cnt;
    for(int i = 0; i < m; i++){
        cin >> r >> c;
        r--;
        c--;
        grid[r][c] = 1;
        cnt = 0;
        for(int j = 0; j < 4; j++){
            aroundR = r + dr[j];
            aroundC = c + dc[j];
            if(inRange(aroundR, aroundC, n) && grid[aroundR][aroundC] == 1)
                cnt++;
        }
        cout << (cnt == 3) << endl;
    }
    return 0;
}