#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int length = n % 2 == 0? n / 2 : n / 2 + 1;
    int max = 0;
    int cur = 0;
    for(int i = 0; i < length; i++){
        cur = arr[i] + arr[n - i - 1];
        max = cur > max ? cur : max;
    }
    cout << max;
    return 0;
}