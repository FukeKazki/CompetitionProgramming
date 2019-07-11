#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int r, D, x;
    cin >> r >> D >> x;
    int i = 10;
    while(i) {
        int tmp = r*x - D;
        cout << tmp << endl;
        x = tmp;
        i--;
    }

    return 0;
}