#include <iostream>
using namespace std;

#define MAX_LENGTH 100 * 10
int getDirection(string direction) {
    if (direction == "N")
        return 0;
    if (direction == "E")
        return 1;
    if (direction == "S")
        return 2;    
    if (direction == "W")
        return 3;
}
int main() {
    int n;
    cin >> n;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    int cnt = 0;
    string direction;
    int x = 0, y = 0;
    int length;
    int dirNum;
    int flag = 1;
    for(int i = 0; i < n && flag; i++){
        cin >> direction >> length;
        dirNum = getDirection(direction);
        while(length--) {
            x += dx[dirNum];
            y += dy[dirNum];
            cnt++;
            if(x == 0 && y == 0){
                flag = 0;
                break;
            }
        }
    }
    if (x != 0 || y != 0)
        cnt = -1;
    cout << cnt << endl;
    return 0;
}