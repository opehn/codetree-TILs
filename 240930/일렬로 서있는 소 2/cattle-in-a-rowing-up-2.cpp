#include <iostream>
using namespace std;

#define MAX_N 100
int main() {
    int n; 
    cin >> n;

    int cows[MAX_N] = {};

    for(int i = 0; i < n; i++) {
        cin >> cows[i];
    }

    int cnt = 0; 
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++) {
                if(cows[i] <= cows[j] && cows[j] <= cows[k])
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}