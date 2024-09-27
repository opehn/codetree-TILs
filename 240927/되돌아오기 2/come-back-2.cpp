#include <iostream>
using namespace std;

int main() {
    string direction;
    cin >> direction;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int dirNum = 0;
    int dist;
    int x, y;
    int ans = -1;
    int cnt = 0;
    int flag = 1;
    for(int i = 0; i < direction.length() && flag; i++){
        char curDir = direction[i];
        if(curDir == 'R'){
            dirNum = dirNum + 1 % 4;
            cnt++;
            continue;
        }
        if(curDir == 'L') {
            dirNum = dirNum - 1 % 4;
            cnt++;
            continue;
        }
        x += dx[dirNum];
        y += dy[dirNum];
        cnt++;
        if(x == 0 && y == 0) {
            ans = cnt;
            flag = 0;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}