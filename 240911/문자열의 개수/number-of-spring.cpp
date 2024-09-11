#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> strings;
    string input;

    while(true) {
        cin >> input;
        if(input == "0") break;
        strings.push_back(input);
    }
    cout << strings.size() << endl;

    for(int i = 0; i < strings.size(); i += 2) {
            cout << strings[i] << endl;
    }
    return 0;
}