#include <iostream>
#include <vector>
using namespace std;

#define MAX_R 2000
#define OFFSET 1000

int main() {
    int n;
    cin >> n;

    vector<int> line(MAX_R + 1, 0);
    int num;
    string command;
    int start, end;
    int cur = OFFSET; 

    for(int i = 0; i < n; i++){
        cin >> num >> command;

        start = cur;
        if (command == "R") {
            end = start + num;
            for(int j = start; j < end; j++){ 
                line[j]++;
            }
            cur = end;  
        } else { 
            end = start - num;
            for(int j = start - 1; j >= end; j--){  
                line[j]++;
            }            
            cur = end; 
        }
    }

    int cnt = 0;
    for(int i = 0; i <= MAX_R; i++){  
        if(line[i] >= 2) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}