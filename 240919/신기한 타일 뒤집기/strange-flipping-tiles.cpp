#include <iostream>
using namespace std;

#define MAX_N 1000
#define MAX_LENGTH MAX_N * 100 * 2
#define OFFSET MAX_N * 100
#define BLACK -1
#define WHITE 1

int main() {
    int n;
    cin >> n;

    int line[MAX_LENGTH + 1];
    int cur = OFFSET;

    int distance;
    string direction;
    int start, end;
    for(int i = 0; i < n; i++){
        cin >> distance >> direction;
        start = cur;
        if (direction == "R"){
            end = cur + distance;
            for(int i = cur; i < cur + distance; i++){
                line[i] = BLACK;
            }
            cur = end - 1;

        } else {
            end = cur - distance;
            for(int i = cur; i > end; i--){
                line[i] = WHITE;
            }
            cur = end + 1;      
        }
    }

    int blackCnt = 0, whiteCnt = 0; 
    for(int i = 0; i < MAX_LENGTH + 1; i++){
        if(line[i] == BLACK){
            blackCnt++;
        } else if (line[i] == WHITE) {
            whiteCnt++;
        }
    }

    cout << whiteCnt << " " << blackCnt << endl;

    return 0;
}