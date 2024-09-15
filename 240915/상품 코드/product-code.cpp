#include <iostream>
#include <utility>
using namespace std;

int main() {
    string name;
    int code;
    cin >> name >> code;

    pair<string, int> product1 = make_pair("codetree", 50);
    pair<string, int> product2 = make_pair(name, code);

    cout << "product " << product1.second << " is " << product1.first << endl; 
    cout << "product " << product2.second << " is " << product2.first << endl; 
    return 0;
}