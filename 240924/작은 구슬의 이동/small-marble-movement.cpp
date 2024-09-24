#include <iostream>
using namespace std;

int getDir(string dir) {
    if(dir == "U") 
        return 0;
    if(dir == "D") 
        return 3;
    if(dir == "R") 
        return 2;
    if(dir == "L") 
        return 1;

    return -1;
}

int inRange(int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    int n, t, x, y;
    string dir;

    cin >> n >> t >> x >> y >> dir;

    int dx[4] = {0, 1, -1, 0}, dy[4] = {1, 0, 0, -1};
    
    int dirNum = getDir(dir);


    int cnt = 0;
    for(int i = 0; i < t; i++){
        x += dx[dirNum];
        y += dy[dirNum];
        if (!inRange(x, y, n))
            dirNum = 3 - dirNum; 
    }
    cout << x << " " <<  y << endl;

    return 0;
}