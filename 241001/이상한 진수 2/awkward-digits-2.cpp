#include <iostream>
#include <cmath>
using namespace std;

#define MAX 10
int main() {
    string a;
    cin >> a;

    int max = 0;
    int decimal = 0;
    int power = 0;
    string temp;
    for(int i = 0; i < a.length(); i++) {
        temp = a;
        temp[i] = temp[i] == '1' ? '0' : '1';
        for(int j = temp.length() - 1; j >= 0; j--){
            if(temp[j] == '1'){
                decimal += (1 << power);
            }
            power++;
        } 
        max = decimal > max ? decimal : max;
        decimal = 0;
        power = 0;
    }
    cout << max;
    return 0;
}