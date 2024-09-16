#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

#define MAX_PERSON 5

bool cmpByName(tuple<string, int, double>a, tuple<string, int, double>b){
    string name1, name2;

    tie(name1, ignore, ignore) = a;
    tie(name2, ignore, ignore) = b;

    return name1 < name2;
}

bool cmpByHeight(tuple<string, int, double>a, tuple<string, int, double>b){
    int height1, height2;

    tie(ignore, height1, ignore) = a;
    tie(ignore, height2, ignore) = b;

    return height1 > height2;
}

int main() {
    tuple<string, int, double> persons[MAX_PERSON];

    string name;
    int height;
    double weight;
    for(int i = 0; i < MAX_PERSON; i++){
        cin >> name >> height >> weight;
        persons[i] = make_tuple(name, height, weight);
    }

    sort(persons, persons + MAX_PERSON, cmpByName);
    
    cout << fixed;
    cout.precision(1);
    cout << "name" << endl;
    for(int i = 0; i < MAX_PERSON; i++){
        tie(name, height, weight) = persons[i];
        cout << name << " " << height << " " << weight << endl;
    }

    sort(persons, persons + MAX_PERSON, cmpByHeight);
    cout << endl << "height" << endl;
    for(int i = 0; i < MAX_PERSON; i++){
        tie(name, height, weight) = persons[i];
        cout << name << " " << height << " " << weight << endl;
    }
    return 0;
}