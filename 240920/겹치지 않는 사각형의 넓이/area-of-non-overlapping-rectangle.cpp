#include <iostream>
using namespace std;

#define OFFSET 1000
#define GRID_SIZE 2001
int main() {
    int grid[GRID_SIZE][GRID_SIZE] = {};
    int x1, x2, y1, y2;
    int minX,minY;
    for(int n = 0; n < 3; n++){
        cin >> x1 >> y1 >> x2 >> y2;
        
        x1 += OFFSET;
        x2 += OFFSET;
        y1 += OFFSET;
        y2 += OFFSET;
        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++){
                if(n < 2){
                    grid[i][j] = 1;
                } else {                    
                    grid[i][j] = 0;
                }
            }
        }
    }

    int cnt = 0; 
    for(int i = 0; i < GRID_SIZE; i++) {
        for(int j = 0; j < GRID_SIZE; j++){
            if (grid[i][j] == 1) cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}