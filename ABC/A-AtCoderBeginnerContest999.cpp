#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    int i = 3;
    while(i) {
        if(n[i-1] == '1') n[i-1] = '9';
        else n[i-1] = '1';
        i--;
    }
    cout << n << endl;
    return 0;
}