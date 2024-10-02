#include <iostream>
#include <vector>
using namespace std;

bool checkCarry(int a, int b, int c){
    
    int digit1, digit2, digit3;
    while(a || b || c) {
        digit1 = a % 10;
        digit2 = b % 10;
        digit3 = c % 10;
        if (digit1 + digit2 + digit3 >= 10) 
            return false;
        a = a / 10;
        b = b / 10;
        c = c / 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n, 0);
    for(int i = 0; i < n; i++){
        cin >> nums[i]; 
    }

    vector<int> noCarrys;
    int sum;
    int max = -1;
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                if(checkCarry(nums[i], nums[j], nums[k])) {
                    sum = nums[i] + nums[j] + nums[k];
                    max = sum > max ? sum : max;
                }
            }
        }
    }

    cout << max << endl;
    return 0;
}