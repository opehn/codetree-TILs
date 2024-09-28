#include <iostream>
using namespace std;

int r, c, dir;
void getFirstPosition(int k, int n){
    int r, c, dir;
    if(k <= n) {
        dir = 2;
        r = 0;
        c = k - 1;
    } else if(num <= 2* n) {
        dir = 3;
        r = k - n - 1;
        c = n - 1; 
    } else if(num <= 3 * n) {
        dir = 0;
        r = n - 1;
        c = n - (k - (n * 2));
    } else {
        dir = 3;
        r = n - (k - (n * 3));
        c = 0;
    }
}

int main() {
    int n, k;
    cin >> n;

    int dr[4] = { 0, 1, 0, -1};
    int dc[4] = { -1, 0, 1, 0};
    string slash[4] = {1, -1, 1, -1};
    string backSlash[4] = {-1, 1, -1, 1};

    string grid[n][n] = {};
    string slash;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }

    cin >> k;
    getFirstPosition(k, n);
    cout << dir << " " << r << " " << c << endl;
    return 0;
}