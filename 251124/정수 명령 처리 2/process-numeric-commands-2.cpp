#include <iostream> 
#include <queue>
#include <string>
using namespace std;

int main(void) { 
    queue<int> queue;
    int n;

    cin >> n;
    while(n--) { 
        string command;
        cin >> command;

        if(command == "push")  {
            int a;
            cin >> a;

            queue.push(a);
        }

        if(command == "pop") {
            int front = queue.front();
            cout << front << endl;
            queue.pop();
        }

        if(command == "size") { 
            cout << queue.size() << endl;
        }

        if(command == "empty")  {
            cout << queue.empty() << endl;
        }

        if(command == "front") { 
            cout << queue.front() << endl;
        }
    }

    return 0;
}