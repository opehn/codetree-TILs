#include <iostream>
#include <deque>
#include <string>
#include <sstream>
using namespace std;

int main() {
    deque<int> d;
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) { 
        string commandLine;
        getline(cin, commandLine);
        string command;
        int num;

        stringstream ss(commandLine);
        while(ss >> command) { 
            if(command == "push_front") { 
                ss >> num;
                d.push_front(num);
            }
            else if(command == "push_back") { 
                ss >> num;

                d.push_back(num);
            }
            else if (command == "pop_front") { 
                num = d.front();
                d.pop_front();
                cout << num << endl;

            }
            else if (command == "pop_back") { 
                num = d.back();
                d.pop_back();
                cout << num << endl;
            }
            else if(command == "size") { 
                cout << d.size() << endl;
            }
            else if(command == "empty"){ 
                cout << d.empty() << endl;
            }
            else if(command == "front"){ 
                cout << d.front() << endl;
            }
            else if(command == "back"){ 
                cout << d.back() << endl;
            }
        }
    }
    return 0;
}