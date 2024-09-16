#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    tuple<int, int, int> students[n];
    int height, weight;
    for(int i = 0; i < n; i++){
        cin >> height >> weight;

        students[i] = make_tuple(-height, -weight, i + 1);
    }

    int num;
    sort(students, students + n);
    for(int i = 0; i < n; i++){
        tie(height, weight, num) = students[i];
        cout << -height << " " << -weight << " " << num << " " << endl;
    }
    
    return 0;
}