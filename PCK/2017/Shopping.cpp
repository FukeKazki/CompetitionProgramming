#include <iostream>

using namespace std;

int main() {
    int m, f, b;
    cin >> m >> f >> b;
    if(b > m+f) {
        cout << "NA" << endl;
        return 0;
    }
    if(b-m > 0) {
        cout << b-m << endl;
    }else {
        cout << 0 << endl;
    }
}