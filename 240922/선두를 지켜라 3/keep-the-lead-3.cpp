#include <iostream>
#include <vector>
using namespace std;

#define A 1
#define B 2

int main() {
    int n, m;
    cin >> n >> m;

    int v, t;
    int totalTime = 0;
    vector<int> a, b;
    for(int i = 1; i < n + 1; i++){
        cin >> v >> t;
        totalTime += t;
        while(t--){
            a.push_back(v);
        }
    }

    for(int i = 1; i < m + 1; i++){
        cin >> v >> t;
        while(t--){
            b.push_back(v);
        }
    }

    int prev = 0, cur = 0;
    int posA = 0, posB = 0;
    int cnt = 0;
    for(int i = 0; i < totalTime; i++){
        posA += a[i];
        posB += b[i];
        if(posA > posB){
            cur = A;
        } else if (posA < posB){
            cur = B;
        } else {
            cur = A + B;   
        }
        if (prev != cur) cnt++;
        prev = cur;
    }
    cout << cnt << endl;
    return 0;
}