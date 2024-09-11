#include <iostream>
using namespace std;

int main() {
    string A, B;

    cin >> A >> B;

    int count = 0;
    for(int i = 0; i < A.length(); i++){
        if (A == B)
            break;
        A = A.substr(A.length()-1, 1) + A.substr(0, A.length() - 1);
        count++;
    }
    if (count == A.length()) {
        cout << -1;
    } else { 
        cout << count;
    }
    return 0;
}