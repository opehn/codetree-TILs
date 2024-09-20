#include <iostream>
using namespace std;

#define GRID_SIZE 201
#define SQUARE_SIZE 8
#define OFFSET 100
int main() {
    int n;
    cin >> n;

    int grid[GRID_SIZE][GRID_SIZE] = {};
    int minX, minY;
    for(int i = 0; i < n; i++){
        cin >> minX >> minY;

        minX += OFFSET;
        minY += OFFSET;
        for(int i = minX; i < minX + 8; i++){
            for(int j = minY; j < minY + 8; j++){
                grid[i][j] = 1;
            }
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < GRID_SIZE; i++){
        for(int j = 0; j < GRID_SIZE; j++){
            if(grid[i][j]) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}