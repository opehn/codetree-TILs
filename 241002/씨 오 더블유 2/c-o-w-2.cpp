#include <iostream>
using namespace std;

int main() {
    int n;
    string cows;
    cin >> n >> cows;

    int cnt = 0;
    for(int i = 0; i < n - 2; i++){
        if (cows[i] != 'C')
            continue;
        for(int j = i + 1; j < n - 1; j++){
            if(cows[j] != 'O')
                continue;
            for(int k = j + 1; k < n; k++){
                if(cows[k] == 'W')
                    cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}