#include <iostream>
#include <tuple>
using namespace std;

int main() {
    int n;
    cin >> n;

    tuple<string, string, string> userInfos[n] = {};

    string name, address, location;
    int maxIndex = 0;
    for(int i = 0; i < n; i++){
        cin >> name >> address >> location;
        userInfos[i] = make_tuple(name, address, location);
        if(name > get<0>(userInfos[maxIndex]))
            maxIndex = i;
    }
    
    tie(name, address, location) = userInfos[maxIndex];
    cout << " name " << name << endl;
    cout << " addr " << address << endl;    
    cout << " city " << location << endl;
    return 0;
}