#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;

int main() {
    cin >> n >> m;
    cin >> s;
    list<char> breads;

    for(int i = 0; i < n; i++) { 
        breads.push_back(s[i]);
    }

    list<char>::iterator it;
    it = breads.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;

    switch (command) { 
        case 'L':
        if (it != breads.begin()) { 
            it--;
        }
        break;
        case 'R':
        if (it != breads.end()) { 
            it++;
        }
        break;
        case 'D':
            if (it != breads.end()) { 
                it = breads.erase(it);
            }
            break;
        case 'P':
            char c;
            cin >> c;
            breads.insert(it, c);
            break;
    }
}

for(char c: breads) { 
    cout << c;
}
cout << endl;

    return 0;
}
