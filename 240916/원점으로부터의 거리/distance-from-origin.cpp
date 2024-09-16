#include <iostream>
#include <tuple>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool cmp(tuple<int, int, int> a, tuple<int, int, int> b){
    int x1, x2, y1, y2, num1, num2;

    tie(x1, y1, num1) = a;
    tie(x2, y2, num2) = b;

    int length1 = abs(0 - x1) + abs(0 - y1);
    int length2 = abs(0 - x2) + abs(0 - y2);

    if (length1 == length2)
        return num1 < num2;
    return length1 < length2;    
}

int main() {
    int n;
    cin >> n;

    tuple<int, int, int> points[n];
    int x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        points[i] = make_tuple(x, y, i + 1);
    }

    sort(points, points + n, cmp);

    int num;
    for(int i = 0; i < n; i++){
        tie(ignore, ignore, num) = points[i];
        cout << num << endl;
    }
    return 0;
}