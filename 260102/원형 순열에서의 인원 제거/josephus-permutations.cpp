#include <iostream>
#include <queue>

using namespace std;

int main(void) { 
    int n, k;
    queue<int> queue;

    cin >> n;
    cin >> k;

    for(int i = 0; i < n; i++) { 
        queue.push(i + 1);
    }

    while(queue.size() != 1) { 
        for(int i = 0; i < k - 1; i++){    
            int front = queue.front();
            queue.push(front);
            queue.pop();
        }
        int deliminate = queue.front();
        cout << deliminate << " ";
        queue.pop();
    }
    cout << queue.front();

    return 0;
}