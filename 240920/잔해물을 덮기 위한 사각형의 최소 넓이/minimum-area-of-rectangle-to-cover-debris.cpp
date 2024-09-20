#include <iostream>
using namespace std;

#define GRID_SIZE 2001
#define OFFSET 1000
int main() {
    
    int grid[GRID_SIZE][GRID_SIZE] = {};
    int x1, y1, x2, y2;
    for(int n = 0; n < 2; n++){
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++){
                if (n == 0) {
                    grid[i][j] = 1;
                } else {
                    grid[i][j] = 0;
                }
            }
        }
    }
        int minX = GRID_SIZE, minY = GRID_SIZE, maxX = 0, maxY = 0;
        for(int i = 0; i < GRID_SIZE; i++){
            for(int j = 0; j < GRID_SIZE; j++) {
                if (grid[i][j]){
                    minX = i < minX ? i : minX;
                    maxX = i > maxX ? i : maxX;
                    minY = j < minY ? j : minY;
                    maxY = j > maxY ? j : maxY;
                }
            }
        }

        cout << ((maxX - minX + 1) * (maxY - minY + 1)) << endl;
    return 0;
}