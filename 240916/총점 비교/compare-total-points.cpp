#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

bool cmp(tuple<string, int, int, int>a, tuple<string, int, int, int>b){
    string name;
    int a1, b1, c1;
    int a2, b2, c2;

    tie(name, a1, b1, c1) = a;
    tie(name, a2, b2, c2) = b;

    return a1 + b1 + c1 < a2 + b2 + c2;
}

int main() {
    int n;
    cin >> n;

    tuple<string, int, int, int> scores[n];
    string name;
    int a, b, c;
    for(int i = 0; i < n; i++){
        cin >> name >> a >> b >> c;
        scores[i] = make_tuple(name, a, b, c);
    }

    sort(scores, scores + n, cmp);
    for(int i = 0; i < n; i++){
        tie(name, a, b, c) = scores[i];
        cout << name << " " << a << " " << b << " " << c << endl;
    }
    return 0;
}