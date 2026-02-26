#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    deque<int> dq;
    vector<int> numVector;
    

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) { 
        numVector.push_back(i);
    }

    auto front = numVector.begin();
    while(numVector.size() != 1) { 
        front = numVector.begin();
        numVector.erase(front);
        front = numVector.begin();
        numVector.push_back(*front);
        numVector.erase(front);
    }

    cout << numVector[0];

    return 0;
}