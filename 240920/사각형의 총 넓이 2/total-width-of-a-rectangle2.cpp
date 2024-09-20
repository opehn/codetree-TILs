#include <iostream>
using namespace std;

#define OFFSET 100
#define GRID_SIZE 201
int main() {
    int n;
    cin >> n;

    int grid[GRID_SIZE][GRID_SIZE] = {};
    int x1, y1, x2, y2;
    int minX, maxX, minY, maxY;
    for(int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        minX = x1 < x2 ? x1 : x2;
        maxX = x1 > x2 ? x1 : x2;
        minY = y1 < y2 ? y1 : y2;
        minY = y1 > y2 ? y1 : y2;
        for(int i = x1; i < x2; i++ ) {
            for(int j = y1; j < y2; j++){
                grid[i][j] = 1;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < GRID_SIZE; i++){
        for(int j = 0; j < GRID_SIZE; j++){
            if (grid[i][j] == 1) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}