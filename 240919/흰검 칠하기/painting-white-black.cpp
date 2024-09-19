#include <iostream>
using namespace std;

// #define MAX_N 1000
// #define MAX_R 200000
// #define OFFSET 100000
#define MAX_N 20
#define MAX_R 10
#define OFFSET 5
#define BLACK -1
#define WHITE 1

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
                line[i] = BLACK;
                black[i]++;
            }
            cur = end;
        } else {
            end = start - distance;
            for(int i = start - 1; i >= end; i--){
                line[i] = WHITE;
                white[i]++;
            }
            cur = end;
        }
    }


    int blackCnt = 0;
    int whiteCnt = 0;
    int grayCnt = 0;
    for(int i = 0; i < MAX_R + 1; i++){
        if (black[i] >=2 && white[i] >= 2){
            grayCnt++;
            continue;
        }
        if(line[i] == BLACK) blackCnt++;
        if(line[i] == WHITE) whiteCnt++;
    }

    cout << whiteCnt << " " << blackCnt << " " << grayCnt << endl;
    return 0;
}