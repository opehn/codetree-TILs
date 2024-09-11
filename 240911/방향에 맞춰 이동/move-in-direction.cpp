#include <iostream>
using namespace std;

int main() {
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, -1, 1, 0};

    int n = 0;
    int x = 0; 
    int y = 0;
    cin >> n;
    
    char command;
    int length = 0;
    for(int i = 0; i < n; i++) {
        cin >> command >> length;
        switch (command) {
            case 'W':
                x += dx[0] * length;
                y += dy[0] * length;
                break;
            case 'S':
                x += dx[1] * length;
                y += dy[1] * length;
                break;
            case 'N':
                x += dx[2] * length;
                y += dy[2] * length;
                break;
            case 'E':
                x += dx[3] * length;
                y += dy[3] * length;
                break;                
        }
    }

    cout << x << " " << y << endl;
    return 0;
}