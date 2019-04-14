#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double r;
    cin >> r;
    cout << fixed << setprecision(6) << M_PI*(r*r) << ' ' << M_PI*(2*r) << endl;
    return 0;
}