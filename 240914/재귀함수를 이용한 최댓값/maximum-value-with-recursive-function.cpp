#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findMax(const vector<int> &numArr, int index) {
    if(numArr.size() - 1 == index)
        return numArr[index];
    return max(findMax(numArr, index + 1), numArr[index]);
}

int main() {
    int n = 0;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << findMax(arr, 0);

    return 0;
}