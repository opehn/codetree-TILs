#include <iostream>
#include <tuple>
using namespace std;

int main() {
    string code;
    char RGB;
    int second;

    cin >> code >> RGB >> second;
    tuple <string, char, int> toDestruct = make_tuple(code, RGB, second);

    string codeOut;
    char RGBOut;
    int secondOut;

    tie(codeOut, RGBOut, secondOut) = toDestruct;  

    cout << "code : " << codeOut << endl
    << "color : " << RGBOut << endl
    << "second : " << secondOut << endl;  
    return 0;
}