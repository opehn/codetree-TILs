#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    tuple<int, int, int, string> scores[n];

    string name;
    int kor, eng, math;
    for(int i = 0; i < n; i++){
        cin >> name >> kor >> eng >> math;
        scores[i] = make_tuple(-kor, -eng, -math, name);
    }

    sort(scores, scores + n);

    for(int i = 0; i < n; i++){
        string name;
        int kor, eng, math;

        tie(kor, eng, math, name) = scores[i];
        cout << name << " "
        << -kor << " " 
        << -eng << " "
        << -math << " " << endl;
    }
    return 0;
}