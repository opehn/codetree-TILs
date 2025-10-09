#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 100000

int n; 
int arr[MAX_N];

int partition(int low, int high) { 
    int i = low - 1;
    int pivot = arr[high];

    for(int j = low; j < high; j++) { 
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;    
}

void quickSort(int low, int high) { 


    if (low < high) { 
        int pos;
        pos = partition(low, high);

        quickSort(low, pos - 1);
        quickSort(pos + 1, high);    
    }
}

int main() {
    cin >> n ;

    for(int i = 0; i < n; i++) { 
        cin >> arr[i];
    }

    quickSort(0, n - 1);

    for(int i = 0; i < n; i++) { 
        cout << arr[i] << " ";
    }
    return 0;
}