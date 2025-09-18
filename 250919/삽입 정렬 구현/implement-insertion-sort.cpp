#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int arr[MAX_N];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int j;
    for (int i = 1; i < n; i++) { 
        
        int key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
    

    for(int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    return 0;
}
