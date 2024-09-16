#include <iostream>
#include <algorithm>
using namespace std;

class Student {
    public: 
        string name;
        int height;
        int weight;

        Student(string name = "", int height = 0, int weight = 0):name(name), height(height), weight(weight) {};
};

bool cmp(Student a, Student b){
    return a.height < b.height;
}

int main() {
    int n; 
    cin >> n;

    Student students[n];

    string name;
    int height;
    int weight;
    for(int i = 0; i < n; i++){
        cin >> name >> height >> weight;
        students[i] = Student(name, height, weight);
    }

    sort(students, students + n, cmp);

    for(int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;
    }

    return 0;
}