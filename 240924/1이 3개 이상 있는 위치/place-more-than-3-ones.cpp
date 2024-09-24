#include <iostream>
using namespace std;

bool inRange(int x, int y, int n){
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    int n;
    cin >> n;

    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};

    int curDx = 0, curDy = 0;
    int oneCnt = 0;
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                curDx = dx[k], curDy = dy[k];
                if (inRange(i + curDx, j + curDy, n) && arr[i + curDx][j + curDy] == 1)
                    oneCnt++;
            }
            if(oneCnt >= 3)
                res++;
            oneCnt = 0;
        }
    }

    cout << res << endl;

    return 0;
}