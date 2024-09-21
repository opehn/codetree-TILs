#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int students[n + 1] = {};
    int timeline[m] = {};

    int target;
    int ans = -1;
    for(int sec = 0; sec < m; sec++){
        cin >> target;
        students[target]++;
        if (students[target] >= k) {
            ans = target;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}