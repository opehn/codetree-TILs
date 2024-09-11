#include <iostream>
using namespace std;

#define GRID_SIZE 5
int main() {
    int grid[GRID_SIZE][GRID_SIZE];
    for (int j = 0; j < GRID_SIZE; j++) {
        grid[0][j] = 1;
    }
    for (int i = 0; i < GRID_SIZE; i++) {
        grid[i][0] = 1;
    }

    for (int i = 1; i < GRID_SIZE; i++) {
        for(int j = 1; j < GRID_SIZE; j++) {
            grid[i][j] = grid[i - 1][j] + grid[i][j-1];
        }
    }

    for (int i = 0; i < GRID_SIZE; i++) {
        for(int j = 0; j < GRID_SIZE; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}