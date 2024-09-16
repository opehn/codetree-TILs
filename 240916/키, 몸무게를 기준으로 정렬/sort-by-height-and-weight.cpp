#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;

bool cmp(tuple<int, int, string> a, tuple<int, int, string> b){
    int height1, weight1, height2, weight2;

    tie(height1, weight1, ignore) = a;
    tie(height2, weight2, ignore) = b;

    if (height1 == height2)
        return weight1 > weight2;
    return height1 < height2;   
}

int main() {
    int n;
    cin >> n;

    tuple<int, int, string> persons[n];
    string name;
    int height, weight;
    for(int i = 0; i < n; i++){
        cin >> name >> height >> weight;

        persons[i] = make_tuple(height, weight, name);
    }
    
    sort(persons, persons + n, cmp);

    for(int i = 0; i < n; i++){
        tie(height, weight, name) = persons[i];
        cout << name << " " << height << " " << weight << endl;
    }
    return 0;
}