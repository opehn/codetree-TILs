#include <iostream>
using namespace std;

#define MAX_N 1000
#define MAX_R 200000
#define OFFSET 100000
#define BLACK -1
#define WHITE 1
#define GRAY 2

int main() {
    int n;
    cin >> n;

    int black[MAX_R + 1] = {};
    int white[MAX_R + 1] = {};
    int line[MAX_R + 1] = {};

    int cur = OFFSET;
    int distance;
    string direction;
    int start;
    int end;
    for(int i = 0; i < n; i++){
        cin >> distance >> direction;

        start = cur;
        if (direction == "R"){
            end = start + distance;
            for(int i = start; i < end; i++){
                black[i]++;
                if (black[i] >=2 && white[i] >= 2){
                    line[i] = GRAY;
                } else {
                    line[i] = BLACK;
                }
            }
            cur = end - 1;
        } else {
            end = start - distance;
            for(int i = start; i > end; i--){
                white[i]++;
                if (black[i] >=2 && white[i] >= 2){
                    line[i] = GRAY;
                } else {
                    line[i] = WHITE;
                }
            }
            cur = end + 1;
        }
    }


    int blackCnt = 0;
    int whiteCnt = 0;
    int grayCnt = 0;
    for(int i = 0; i < MAX_R + 1; i++){
        if(line[i] == GRAY) grayCnt++;
        else if(line[i] == BLACK) blackCnt++;
        else if(line[i] == WHITE) whiteCnt++;
    }

    cout << whiteCnt << " " << blackCnt << " " << grayCnt << endl;
    return 0;
}