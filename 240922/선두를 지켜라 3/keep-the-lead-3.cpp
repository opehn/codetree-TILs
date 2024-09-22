#include <iostream>
using namespace std;

#define MAX_LINE 1000 + 1
#define MAX_DISTANCE 1000 * 1000 * 1000
#define A 1
#define B 2

int main() {
    int n, m;
    cin >> n >> m;

    int v, t;
    int totalTime = 0;
    int a[MAX_LINE] = {};
    int b[MAX_LINE] = {};
    for(int i = 1; i < n + 1; i++){
        cin >> v >> t;
        totalTime += t;
        while(t--){
            a[i] = a[i] - 1 + v;
        }

    }

    for(int i = 1; i < m + 1; i++){
        cin >> v >> t;
        while(t--){
            b[i] = b[i] - 1 + v;
        }
    }

    int first;
    int cur;
    int cnt = 0;
    for(int i = 1;i < totalTime + 1; i++){
        if(a[i] > b[i]){
            cur = A;
        } else if (a[i] < b[i]){
            cur = B;
        } else {
            cur = A + B;   
        }
        if (first != cur) cnt++;
        first = cur;
    }
    cout << cnt << endl;
    return 0;
}