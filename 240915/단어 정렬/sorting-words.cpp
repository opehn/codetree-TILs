#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string strArr[n] = {};
    for(int i = 0; i < n; i++){
        cin >> strArr[i];
    }

    sort(strArr, strArr + n);
    for(int i = 0; i < n; i++){
        cout << strArr[i] << endl;
    }
    return 0;
}