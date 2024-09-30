#include <iostream>
#include <climits>

using namespace std;

#define MAX_N 100
int main() {
    int n;
    cin >> n;

    int people[MAX_N];
    for(int i = 0; i < n; i++){
        cin >> people[i];
    }

    int min = INT_MAX;
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum += people[j] * abs(i - j);

        }
        min = min > sum ? sum : min;
        sum = 0;
    }
    cout << min << endl;
    
    return 0;
}