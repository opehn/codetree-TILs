#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[n]; 
    int sorted[n];
    int result[n];

    for(int i = 0; i < n; i++){
        cin >> nums[i];
        sorted[i] = nums[i];
    }

    sort(sorted, sorted + n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(nums[i] == sorted[j]) {
                cout << j + 1 << " ";
                sorted[j] = -1;
                break;
            }

        }
    }
    
    return 0;
}