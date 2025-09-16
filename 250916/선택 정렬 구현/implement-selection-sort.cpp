#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    int min = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i ++) {
        min = i;
        for (int j = i + 1; j < n; j++) { 
                if (arr[j]  < arr[min]) 
                    min = j;
        }
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }

    for(int i = 0; i < n; i++)  {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
