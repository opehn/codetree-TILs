#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

bool cmp(tuple<int, int, int> a, tuple<int, int, int> b){
    int height1, height2, weight1, weight2;

    tie(height1, weight1, ignore) = a;
    tie(height2, weight2, ignore) = b;

    if(height1 == height2)
        return weight1 > weight2;
    return height1 < height2;
}

int main() {
    int n;
    cin >> n;

    tuple<int, int, int> students[n];
    int height, weight;

    for(int i = 0; i < n; i++){
        cin >> height >> weight;
        students[i] = make_tuple(height, weight, i + 1);
    }

    sort(students, students + n, cmp);

    int num;
    for(int i = 0; i < n; i++){
        tie(height, weight, num) = students[i];
        cout << height << " " << weight << " " << num << endl;
    }
    return 0;
}