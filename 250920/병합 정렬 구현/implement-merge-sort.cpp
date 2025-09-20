#include <iostream>

using namespace std;

const int MAX_LENGTH = 100000;
int n;
int arr[MAX_LENGTH];

void merge(int toSort[], int low, int mid, int high) {
     int i = low;
     int j = mid + 1;
     int mergedArr[MAX_LENGTH];

     int k = low;
     while (i <= mid && j <= high) { 
        if (toSort[i] < toSort[j]) { 
            mergedArr[k] = toSort[i];
            k++;
            i++;
        } else { 
            mergedArr[k] = toSort[j];
            k++;
            j++;
        }
     }

     while (i <= mid) { 
        mergedArr[k] = toSort[i];
        k++; 
        i++;
     }

     while(j <= high) { 
        mergedArr[k] = toSort[j];
        k++;
        j++;
     }

     for(k = low; k <= high; k++) { 
        toSort[k] = mergedArr[k];
     }

}

void merge_sort(int toSort[], int low, int high) {
    if (low < high) { 
        int mid =  (low + high) / 2;
        merge_sort(toSort, low, mid);
        merge_sort(toSort, mid + 1, high);
        merge(toSort, low, mid, high);
    }
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }    

    int high = n - 1;

    merge_sort(arr, 0, high);

    for (int j = 0; j < n; j++) { 
        cout << arr[j] << " ";
    }

    return 0;
}
