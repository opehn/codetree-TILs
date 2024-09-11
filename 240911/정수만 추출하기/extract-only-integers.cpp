#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    int aIdx = 0;
    for(int i = 0; i < a.length(); i++){
        if (a[i] < '0' || a[i] > '9')
            break;
        aIdx++;
    }
    
    int bIdx = 0;
    for(int i = 0; i < b.length(); i++){
        if (b[i] < '0' || b[i] > '9')
            break;
        bIdx++;
    }
    
    int res1 = stoi(a.substr(0, aIdx));
    int res2 = stoi(b.substr(0, bIdx));

    cout << res1 + res2 << endl;
    return 0;
}