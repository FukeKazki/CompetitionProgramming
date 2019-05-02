#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double x = (x2 - x1) * (x2 - x1);
    double y = (y2 - y1) * (y2 - y1);
    cout << fixed << setprecision(6) << sqrt(x+y) << endl;
    return 0;
}