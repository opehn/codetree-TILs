#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[n] = {};
    int length = 0;
    int mid = 0;
    for(int i = 0; i < n; i++){
        length = i + 1;
        cin >> nums[i];
        
        if (length == 1) {
            cout << nums[0] << " ";
        }
        if (length != 1 && length % 2 == 1){
            sort(nums, nums + length);
            mid = length / 2 + 1;
            cout << nums[mid - 1 ] << " ";
        }
    }
    return 0;
}