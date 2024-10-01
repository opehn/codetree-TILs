#include <iostream>
#include <utility>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n; 

    vector<pair<int, int>> points(n);
    for(int i = 0; i < n; i++){
        cin >> points[i].first;
        cin >> points[i].second;
    }

    int total = 0;
    int min_distance = INT_MAX;
   
    for(int i = 1; i < n - 1; i++){
        vector<pair<int, int>> temp;        
        for(int j = 0; j < n; j++){
            if(j != i) {
                temp.push_back(points[j]);
            }
        }
        for(int k = 0; k < temp.size() - 1; k++){
            total += abs(temp[k].first - temp[k + 1].first) + abs(temp[k].second - temp[k + 1].second); 
        }
        min_distance = total < min_distance ? total : min_distance;
        total = 0;
    }

    cout << min_distance << endl;
    return 0;
}