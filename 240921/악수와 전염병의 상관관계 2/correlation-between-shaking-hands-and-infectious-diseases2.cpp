#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

#define MAX_TIME 250
int main() {
    int n, k, p, t;
    cin >> n >> k >> p >> t;

    int persons[n + 1] = {};
    int count[n + 1] = {};
    persons[p] = 1;
    tuple<int, int, int> handshakes[t];
    int s, x, y;
    for(int i = 0; i < t; i++) {
        cin >> s >> x >> y;
        handshakes[i] = make_tuple(s, x, y);
    }
    sort(handshakes, handshakes + t);

    for(int i = 0; i < t; i++){
        tie(s, x, y) = handshakes[i];        
        if(persons[x] == 1 && count[x] < k) {
            persons[y] = 1;
        }
        if(persons[y] == 1 && count[y] < k) {
            persons[x] = 1;
        }
        
        if(persons[x]) {
            count[x]++;
        }
        if(persons[y]) {
           count[y]++; 
        }
    }  
        
    for(int i = 1; i <= n; i++){
        cout << persons[i];
    }
    return 0;
}