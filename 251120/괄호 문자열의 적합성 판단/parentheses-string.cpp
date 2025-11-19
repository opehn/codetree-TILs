#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) { 
    stack<char> st;
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++) { 
        if(str[i] == '(')
            st.push(str[i]);
        if(str[i] == ')') { 
            if (st.empty()) {
                cout << "No" << endl;
                break;
            }
            st.pop();
        }
    }

    if(st.size()) { 
        cout << "No" << endl;
    } else { 
        cout << "Yes" << endl;
    }

    return 0;
}