#include <iostream>
using namespace std;

#define MAX_LENGTH 1000000
int main() {
    int n, m;
    cin >> n >> m;

    int a[MAX_LENGTH]; 
    int b[MAX_LENGTH];
    fill(a, a + MAX_LENGTH, MAX_LENGTH + 1);
    fill(b, b + MAX_LENGTH, MAX_LENGTH + 1);

    string direction;
    int second;
    int position = 0; 
    int idx = 0;
    for(int i = 0; i < n; i++){
        cin >> direction >> second;    
        while(second--) {
            if(direction == "L"){
                position--;
                a[idx++] = position;

            } else {
                position++;
                a[idx++] = position;
            }
        }
    }
    
    position = 0;
    idx = 0; 
    for(int i = 0; i < m; i++){
        cin >> direction >> second;    
        while(second--) {
            if(direction == "L"){
                position--;
                b[idx++] = position;
            } else {
                position++;
                b[idx++] = position;
            }
        }
    }

    int flag = 0;
    for(int i = 0; i < MAX_LENGTH; i++){
        if(a[i] != MAX_LENGTH + 1 && b[i] != MAX_LENGTH + 1 &&
        a[i] == b[i]) {
            flag = 1;
            cout << i + 1 << endl;
            break;
        }
    }

    if(!flag)
        cout << -1 << endl;
    return 0;
}