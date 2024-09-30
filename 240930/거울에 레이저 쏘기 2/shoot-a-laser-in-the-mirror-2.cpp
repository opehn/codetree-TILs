#include <iostream>
using namespace std;

#define MAX_N 1000
#define inRange(r, c, n) (r >= 0 && r < n && c >= 0 && c < n)

int r, c, dir;
void getFirstPosition(int k, int n){
    if(k <= n) {
        dir = 2;
        r = 0;
        c = k - 1;
    } else if(k <= 2* n) {
        dir = 3;
        r = k - n - 1;
        c = n - 1; 
    } else if(k <= 3 * n) {
        dir = 0;
        r = n - 1;
        c = n - (k - (n * 2));
    } else {
        dir = 1;
        r = n - (k - (n * 3));
        c = 0;
    }
}

int main() {
    int n, k;
    cin >> n;

    int dr[4] = { -1, 0, 1, 0};
    int dc[4] = { 0, 1, 0, -1};
    int slash[4] = {1, -1, 1, -1};
    int backSlash[4] = {-1, 1, -1, 1};

    char grid[MAX_N][MAX_N] = {};
    string slashes;
    for(int i = 0; i < n; i++) {
        cin >> slashes;
        for(int j = 0; j < n; j++){
            grid[i][j] = slashes[j];
        }
    }

    cin >> k;
    getFirstPosition(k, n);

    int cnt = 0;    
    while(inRange(r, c, n)) {
        if (grid[r][c] == '\\') {
            dir += backSlash[dir];
        } else {
            dir += slash[dir];
        }
        r += dr[dir];
        c += dc[dir];
        cnt++;
    }

    cout << cnt << endl;
    return 0;
}