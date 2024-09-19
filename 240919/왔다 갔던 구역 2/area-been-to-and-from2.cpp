#include <iostream>
using namespace std;

#define MAX_LENGTH 10
int main() {
    int n;
    cin >> n;

    int line[MAX_LENGTH * 4] = {};
    int num;
    string command;
    int start, end, cur;
    int flag = 0;
    for(int i = 0; i < n; i++){
        cin >> num >> command;

        if (!flag){
            start = MAX_LENGTH * 2 - 1;
        } else {
            start = cur;
        }
        if (command == "R") {
            end = start + num;
            for(int i = start; i <= end; i++){
                line[i]++;
                cur = i;
            }

        } else {
            end = start - num;
            for(int i = start; i >= end; i--){
                line[i]++;
                cur = i;
            }            

        }

        flag = 1;
    }

    int cnt = 0;
    int curStart, curEnd;
    for(int i = 0; i < MAX_LENGTH * 4; i++){
        if(line[i] >= 2) {
            curStart = i;
            while(line[i] >= 2){
                 i++;
            }
            curEnd = i;
            cnt += curEnd - curStart - 1;
        }
    }
    cout << cnt << endl;
    return 0;
}