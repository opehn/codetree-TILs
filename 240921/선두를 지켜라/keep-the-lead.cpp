#include <iostream>
using namespace std;

#define MAX_TIME 1000 * 1000 + 1
#define MAX_LENGTH MAX_TIME * 1000

int main() {
    int n, m;
    cin >> n >> m;

    int timeline_a[MAX_TIME] = {};
    int timeline_b[MAX_TIME] = {};
    
    int totalTime = 0;
    int cur = 0;
    int speed, hour;
    for(int i = 0; i < n; i++){
        cin >> speed >> hour;
        totalTime += hour;
        while(hour--){
            timeline_a[cur + 1] = timeline_a[cur] + speed;
            cur++;
        }
    }

    cur = 0;
    for(int i = 0; i < m; i++){
        cin >> speed >> hour;
        while(hour--){
            timeline_b[cur + 1] = timeline_b[cur] + speed;
            cur++;
        }
    } 

    int current = 0;
    int prev = 0;
    int cnt = 0;
    for(int i = 0; i < totalTime; i++){
        if(timeline_a[i] > timeline_b[i]){
            current = 2;
        } else if (timeline_a[i] < timeline_b[i]) {
            current = 1;
        } else {
            current = 0;
        }

        if(prev != 0 && prev != current) {
            cnt++; 
        }

        prev = current;
    }

    cout << cnt << endl;

    return 0;
}