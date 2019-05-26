#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if(A >= 13) {
        cout << B << endl;
    } else if(A >= 6 && A <= 12) {
        cout << B/2 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}