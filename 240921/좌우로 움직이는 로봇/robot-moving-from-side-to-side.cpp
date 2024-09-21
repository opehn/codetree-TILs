#include <iostream>
using namespace std;

#define MAX_TIME 1000000 + 1
int main() {
    int n, m;
    cin >> n >> m;

    int traceA[MAX_TIME] = {};
    int traceB[MAX_TIME] = {};

    int timeA = 0;
    int second;
    string direction;
    int move;
    for(int i = 0; i < n; i++){
        cin >> second >> direction;
        move = direction == "L" ? -1 : 1;
        while(second--) {
            traceA[timeA + 1] = traceA[timeA] + move;
            timeA++;
        }

    }

    int timeB = 0;
    move = 0;
    for(int i = 0; i < m; i++){
        cin >> second >> direction;
        move = direction == "L" ? -1 : 1;
        while(second--) {
            traceB[timeB + 1] = traceB[timeB] + move;
            timeB++;
        }   
    }

    int maxTime = timeA > timeB ? timeA : timeB;
    int difference = 0;
    if (maxTime == timeA) {
        difference = timeA - timeB;
        while(difference--){
            traceB[timeB + 1] = traceB[timeB];
            timeB++;
        }
    } else {
        difference = timeB - timeA;
        while(difference--){
            traceA[timeA + 1] = traceA[timeA];
            timeA++;
        }    
    }

    int cnt = 0;
    for(int i = 0; i < maxTime; i++){
        if (traceA[i] != traceB[i] && traceA[i + 1] == traceB[i + 1])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}