#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum;
    int max = INT_MIN;
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 2; j < n; j++){
            sum = arr[i] + arr[j];
            max = sum > max ? sum : max;
            sum = 0;
        }
    }

    cout << max << endl;
    return 0;
}