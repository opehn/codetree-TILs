#include <iostream>
#include <utility>
using namespace std;

int main() {
    string id;
    int level;

    cin >> id >> level;
    pair<string, int> userInfo1 = make_pair("codetree", 10);
    pair<string, int> userInfo2 = make_pair(id, level);

    cout << "user " << userInfo1.first << " lv " << userInfo1.second << endl;
    cout << "user " << userInfo2.first << " lv " << userInfo2.second << endl;    
    return 0;
}