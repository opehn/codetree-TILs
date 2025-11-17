#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) { 
    stack<int> s;

    int n ;
    cin >> n;

    while(n--) { 
        string command;
        cin >> command;
        

        if(command == "push"){ 
            int num;
            cin >> num;
            s.push(num);
        }
        else if(command == "pop"){ 
            cout << s.top() << endl;
            s.pop();
        }
        else if (command == "size"){ 
            cout << s.size() << endl;
        }
        else if (command == "empty"){ 
            cout << (s.empty() ? 1 : 0) << endl;
        }
        else if (command == "top") { 
            cout << s.top() << endl;
        }
    }

    return 0;
}