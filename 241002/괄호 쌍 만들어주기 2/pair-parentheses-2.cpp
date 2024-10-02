#include <iostream>
using namespace std;

int main() {
    string brakets;
    cin >> brakets;

    int cnt = 0;
    for(int i = 0; i < brakets.length() - 2; i++){
        if (brakets[i] != '(' || brakets[i + 1] != '(')
            continue;
        for(int j = i + 2; j < brakets.length() - 1; j++){
            if(brakets[j] == ')' && brakets[j + 1] == ')')
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}