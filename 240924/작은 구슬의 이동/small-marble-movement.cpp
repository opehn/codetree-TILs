#include <iostream>
using namespace std;

int getdir(string dir) {
    if(dir == "R") 
        return 0;
    if(dir == "L") 
        return 3;
    if(dir == "U") 
        return 2;
    if(dir == "D") 
        return 1;

    return -1;
}

int inRange(int x, int y, int n) {
    return (x >= 1 && x <= n && y >= 1 && y <= n);
}

int main() {
    int n, t, r, c;
    string dir;

    cin >> n >> t >> r >> c >> dir;

    int dr[4] = {0, -1, 1, 0}, dc[4] = {1, 0, 0, -1};
    
    int dirNum = getdir(dir);


    int nr, nc;
    for(int i = 0; i < t; i++){
        nr = r + dr[dirNum], nc = c + dc[dirNum];

        if (!inRange(nr, nc, n)){
            dirNum = 3 - dirNum; 
        } else {
            r += dr[dirNum];
            c += dc[dirNum];
        }
    }
    cout << r << " " <<  c << endl;

    return 0;
}