#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>

using namespace std;

int main() {
    char b;
    cin >> b;
    switch(b) {
        case 'A':
            cout << 'T' << endl;
        break;
        case 'T':
            cout << 'A' << endl;
        break;
        case 'C':
            cout << 'G' << endl;
        break;
        case 'G':
            cout << 'C' << endl;
        break;
        default:
        break;
    }
    

    return 0;
}