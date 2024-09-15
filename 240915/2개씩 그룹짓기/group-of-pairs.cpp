#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int length = n * 2;
    int arr[length] = {};
    for(int i = 0; i < length; i++){
        cin >> arr[i];
    }

    sort(arr, arr + length);

    int max = 0;
    int cur = 0;

    for(int i = 0; i < length / 2; i++){
        cur = arr[i] + arr[length - i - 1];
        max = cur > max ? cur : max;
    }
    cout << max;
    return 0;
}