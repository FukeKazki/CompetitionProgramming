#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if ( B + C - A > 0) {
        cout << B + C - A << endl;
    } else {
        cout << 0 << endl;
    }
}