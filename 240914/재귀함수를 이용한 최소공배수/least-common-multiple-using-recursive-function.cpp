#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
    return b? gcd(b, a % b) : a;
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int multipleLcm(vector<int> numbers, int index){
    if (index == numbers.size() - 1)
        return numbers[index];

    return lcm(numbers[index], multipleLcm(numbers, index + 1));
}

int main() {
    int n;

    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << multipleLcm(arr, 0);

    return 0;
}