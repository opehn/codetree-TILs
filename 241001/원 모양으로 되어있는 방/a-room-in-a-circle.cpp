#include <iostream>
#include <climits>
#include <vector>
using namespace std;

#define MAX_N 1003
int main() {
    int n; 
    cin >> n;

    vector<int> rooms(n);
    for(int i = 0; i < n; i++){
        cin >> rooms[i];
    }

    int total = 0;
    int start;
    int dist;
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        start = i;
        for(int j = 0; j < n; j++){
            dist = (j - start + n) % n;
            total += rooms[j] * dist;
        }
        min = total < min ? total : min;
        total = 0;
    }
    cout << min << endl; 
    return 0;
}