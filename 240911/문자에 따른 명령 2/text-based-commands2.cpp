#include <iostream>
using namespace std;

int main() {
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int dir = 0;
    int nx, ny; 
    nx = ny = 0;

    string commands;
    cin >> commands;

    for(int i = 0; i < commands.length(); i++) {
        switch(commands[i]) {
            case 'L':
                dir = (dir + 3) % 4;
                break;
            case 'R':
                dir = (dir + 1) % 4;
                break;
            case 'F':
                nx += dx[dir];
                ny += dy[dir];
                break;
        }
    }
    cout << nx << " " << ny;

    return 0;
}