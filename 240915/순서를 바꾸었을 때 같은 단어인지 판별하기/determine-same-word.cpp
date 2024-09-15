#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string a, b;    

    cin >> a >> b;

    if(a.length() != b.length()) {
        cout << "No";
        return 0;
    }

    sort(a.begin(), a.end());
    sort(a.begin(), a.end());

    for(int i = 0; i < a.length(); i++){
        if (a[i] != b[i]) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}