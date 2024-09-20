#include <iostream>
using namespace std;

#define GRID_SIZE 201
#define OFFSET 100
#define RED 1
#define BLUE 2
int main() {
    int n;
    cin >> n;

    int grid[GRID_SIZE][GRID_SIZE] = {};
    int x1, y1, x2, y2;
    for(int k = 0; k < n; k++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        x2 += OFFSET;
        y1 += OFFSET;
        y2 += OFFSET;

        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++) {
                if (k % 2 == 0){
                    grid[i][j] = RED;
                } else {
                    grid[i][j] = BLUE;
                }
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < GRID_SIZE; i++) {
        for(int j = 0; j < GRID_SIZE; j++){
            if(grid[i][j] == BLUE) cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}