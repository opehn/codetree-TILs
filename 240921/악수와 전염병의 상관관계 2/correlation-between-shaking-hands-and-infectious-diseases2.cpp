#include <iostream>
#include <utility>
using namespace std;

#define MAX_TIME 250
int main() {
    int n, k, p, t;
    cin >> n >> k >> p >> t;

    int actualTime = 0;
    int persons[n + 1] = {};
    int count[n + 1] = {};
    persons[p] = 1;
    pair<int, int> handshakes[MAX_TIME];
    fill(handshakes, handshakes + MAX_TIME, make_pair(-1, -1));
    int s, x, y;
    for(int i = 0; i < t; i++) {
        cin >> s >> x >> y;
        handshakes[s - 1] = make_pair(x, y);
        actualTime = actualTime > s ? actualTime : s;
    }

    for(int i = 0; i < actualTime; i++){
        if(handshakes[i].first != -1 && persons[handshakes[i].first] == 1 
        && count[handshakes[i].first] < k) {
            persons[handshakes[i].second] = 1;
        }
        if(handshakes[i].second != -1 && persons[handshakes[i].second] == 1
        && count[handshakes[i].second] < k) {
            persons[handshakes[i].first] = 1;
        }
        
        count[handshakes[i].first]++;
        count[handshakes[i].second]++;
    }  
        
    for(int i = 1; i <= n; i++){
        cout << persons[i];
    }
    return 0;
}